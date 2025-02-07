# Enhanced Local Tone Mapping TMO

## Project Details

This repository contains the implimentation of Enhanced Local Tone Mapping (ELTM) TMO which is used to convert high dynamic range (HDR) images to low dynamic range (LDR) images. See the ELTM paper link below.

### 1. ELTM Architecture

![App Screenshot](https://github.com/abbassi007/Enhanced_Local_Tone_Mapping_TMO/blob/master/pngs/Architecture.jpg)

### 2. Paper Link

- [ELSEVIER](https://www.sciencedirect.com/science/article/pii/S1047320318300555)

### 3. Supporting HDR Image

- PFM

### 4. Code Execution

Follow the steps below to run the code.

- First download the repository in your favourite folder.
- Use the following commands to build:
```
mkdir build_cmake
cd build_cmake
cmake ..
cmake --build .
```
- Run using ```ELTM-TMO.exe path/to/input path/to/output```
- Use image2pnm.py to convert various image formats to the supported PFM format

### 5. Result

![App Screenshot](https://github.com/abbassi007/Enhanced_Local_Tone_Mapping_TMO/blob/master/pngs/example.png)

## Contact

It would be my pleasure to guide and assist you. If you have any questions feel free to contact me at **shahidabbassi002[at][gmail][dot][com]**
