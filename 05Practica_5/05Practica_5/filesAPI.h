#pragma once

#include <stdio.h>
#include <string.h>
FILE* open(char *filename, char* openMode);
void  close(FILE *ptr);
int   write(FILE* ptr, char *buffer, int cant);
int   read(FILE* ptr, char bufferRead[], int cant);