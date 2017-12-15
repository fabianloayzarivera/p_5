#include "stdafx.h"
#include "filesAPI.h"

FILE* open(char *filename, char* openMode) {
	FILE *ptr;
	if (!fopen_s(&ptr, filename, openMode))
		return ptr;
	else
		return nullptr;	
}

void close(FILE *ptr) {
	fclose(ptr);
}

int write(FILE* ptr, char *buffer, int cant) {
	
	int charWritten = fwrite(buffer, cant, 1, ptr) * cant;
	return charWritten;
}

int read(FILE* ptr, char bufferRead[], int cant) {

	int charRead = fread(bufferRead, cant, 1, ptr) * cant;
	return charRead;
}