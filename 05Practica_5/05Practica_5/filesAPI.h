#pragma once

#include <stdio.h>

typedef FILE TypeFile;
TypeFile* open(TypeFile* ptr, char *filename, char* openMode);
void  close(TypeFile* ptr);
int   write(TypeFile* ptr, char *buffer, int cant);
int   read(TypeFile* ptr, char bufferRead[], int cant);