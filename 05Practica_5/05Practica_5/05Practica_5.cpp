// 05Practica_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "filesAPI.h"

using namespace std;
int main()
{
	//for write
	TypeFile* ptrToFile1 = nullptr;
	
	ptrToFile1 = open(ptrToFile1, "myFile.txt", "at+");

	char *buffer = "Hello World!";

	cout << "Number of characters written: " << write(ptrToFile1, buffer, 5) << endl;
	close(ptrToFile1);

	//for read
	TypeFile* ptrToFile2 = nullptr;
	char bufferRead[100] = "";
	ptrToFile2 = open(ptrToFile2, "myFile.txt", "at+");
	cout << "Number of characters read: " << read(ptrToFile2, bufferRead, 4) << " buffer: " << bufferRead << endl;
	close(ptrToFile2);

	getchar();
    return 0;
}

