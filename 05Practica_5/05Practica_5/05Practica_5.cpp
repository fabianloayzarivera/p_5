// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "filesAPI.h"

using namespace std;
int main()
{
	FILE* ptrToFile;
	char *buffer = "Hello World!";
	char bufferRead[100] = "";
	ptrToFile = open("myFile.txt", "at+");

	cout << ptrToFile <<endl;
	cout << "Number of characters written: " << write(ptrToFile, buffer, 5) << endl;
	close(ptrToFile);


	open("myFile.txt", "at+");
	cout << "Number of characters read: " << read(ptrToFile, bufferRead, 4) << " buffer: " << bufferRead << endl;
	close(ptrToFile);

	getchar();
    return 0;
}

