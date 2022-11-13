#include "Blog.h"
#include <iostream>
#include <string.h>
#include <cstring>
#include <cstdio>
#pragma warning(disable:4996)

Blog::Blog(char aName[100], int blogSize) {
	strcpy_s(name, aName);
	#undef BLOG_SIZE
	#define BLOG_SIZE BlogSize
	lineCount = 0;
}

void Blog::AddLine(char* txt) {
	if (strlen(text) == 0) {
		strcpy_s(text, txt);
	}
	else {
		strcat_s(text, txt);
	}
	strcat_s(text, "\n");
	lineCount++;
}

void Blog::SaveInFile() {
	char fileName[104];
	sprintf_s(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "w");
	if (!f) {
		//error
	} 
	else {
		fputs(text, f);
		fclose(f);
	}
}

void Blog::LoadFromFile()	 {
	char fileName[104];
	sprintf_s(fileName, "%s.txt", name);
	FILE* f = fopen(fileName, "r");
	if (!f) {
		//error
	}
	else {
		char txtHold[1000];
		strcpy_s(text, "");
		for (int i = 0; i < lineCount; i++)
		{
			fgets(txtHold, 1000, f);
			strcat_s(text, txtHold);
		}
		fclose(f);
	}
}

void Blog::Print(){
	printf("Blog Name: %s\nContent:\n%s", name, text);
}
