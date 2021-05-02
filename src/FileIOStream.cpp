#include <string.h>
#include <fstream>
#include "FileIOStream.h"

void FileStream::fileManager(const char* fileName, const char* mode, const char* data, int cursor = 1)
{
	/**
		SEEK_SET = dosyanın başından
		SEEK_CUR = cursorün olduğu yerden
		SEEK_END = dosyanın sonundan
	**/
	
	if(!strcmp(mode, "a"))
	{
		FILE *file = fopen(fileName, "a");
		switch(cursor)
		{
			case 1:
				fseek(file, 0, SEEK_CUR);
				fputs(data, file);
			break;
			case 2:
				fseek(file, 0, SEEK_END);
				fputs(data, file);
			break;
			case 0:
				fseek(file, 0, SEEK_SET);
				fputs(data, file);
			break;
		}
		
		fclose(file);
	}
	
	if(!strcmp(mode, "w"))
	{
		FILE *file = fopen(fileName, "w");
		fprintf(file, data);
		fclose(file);
	}
	
	if(!strcmp(mode, "r"))
	{
		FILE *file = fopen(fileName, "r");
		char ch;
		while(!feof(file))
		{
			ch = getc(file);
			printf("%c", ch);
		}
		fclose(file);
	}
}

void FileStream::fileManager(const char* fileName, const char* mode)
{
	fileManager(fileName, mode, NULL);
}