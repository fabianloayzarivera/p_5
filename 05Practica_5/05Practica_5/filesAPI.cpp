#include "stdafx.h"
#include "filesAPI.h"

TypeFile* open(TypeFile* ptr, char *filename, char* openMode) {
	if (!fopen_s(&ptr, filename, openMode))
		return ptr;
	else
		return nullptr;	
}

void close(TypeFile *ptr) {
	fclose(ptr);
}

int write(TypeFile* ptr, char *buffer, int cant) {
	
	int charWritten = fwrite(buffer, cant, 1, ptr) * cant;
	return charWritten;
}

int read(TypeFile* ptr, char bufferRead[], int cant) {

	int charRead = fread(bufferRead, cant, 1, ptr) * cant;
	return charRead;
}