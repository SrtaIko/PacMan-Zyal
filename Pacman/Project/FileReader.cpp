#include "FileReader.hpp"
#include <fstream>
#include <iostream>
using namespace std;
FileReader::FileReader()
{
	fileList[0].open("Assets/Data/HighScore.txt");
	fileList[1].open("Assets/Data/Portrait_Layout.txt");
}

fstream* FileReader::SendFile(int index)
{
	return &fileList[index];
}

void FileReader::ReadCharacter(int index, int& reference)
{
	ReadCharacter(fileList[index], reference);
}

void FileReader::ReadCharacter(fstream& file, int& reference)
{
	if (file)
	{
		char character;
		file >> character;
		reference = (int)character;
	}
}

void FileReader::Close(int index)
{
	fileList[index].close();
}

void FileReader::CloseAll()
{
	int index = 0;
	while (fileList[index])
	{
		Close(index);
		index++;
	}
}
