#pragma once
#define BLOG_SIZE 1000
class Blog
{
public:
	char name[100];
	char text[BLOG_SIZE];
	char* ptr = text;
	int lineCount;

	Blog(char aName[100], int blogSize);
	void SaveInFile();
	void LoadFromFile();
	void AddLine(char* txt);
	void Print();
};

