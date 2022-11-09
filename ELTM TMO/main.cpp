#include"type.h"
#include <iostream>
#include"eltmtmo.h"
#include"constant.h"
#include"functions.h"



int main(int argc, const char *argv[]) {
	int width, height, depth, precision;
	bool pfm, big_endian;
	double gamma = 2.2;

	if (argc != 3)
	{
		std::cout << "Invalid args ";
		for (int i = 1; i < argc; ++i)
			std::cout << argv[i] << ' ';
		std::cout << std::endl;
		std::cout << "Usage: " << argv[0] << " INPUT OUTPUT" << std::endl;
		return -1;
	}

	const char* input_file = argv[1];
	const char* output_file = argv[2];

	
	//Read HDR Image
	FILE* hdr_in = open_PNM(input_file, width, height, depth, precision, pfm, big_endian);

	//initialize memory for the output
	MEMORY* ldr_raw_buffer =  (MEMORY*)malloc(width * height * depth);

	//start process of tmo to convert HDR image to LDR image.
	eltm_tmo(hdr_in, width, height, precision,depth,ldr_raw_buffer, gamma, pfm, big_endian);

	//open file for LDR image
	FILE* fp = fopen(output_file, "wb");

	//writing LDR image 
	write_ppm_file(fp, width, height, ldr_raw_buffer);
	fclose(fp);
	free(ldr_raw_buffer);

	return 0;
}