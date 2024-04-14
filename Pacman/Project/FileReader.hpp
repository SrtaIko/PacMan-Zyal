#pragma once
#include <fstream>
#include <iostream>
using namespace std;
class FileReader
{
private:
	fstream* fileList;
public:
	FileReader();
	fstream* SendFile(int index);
	void ReadCharacter(int index, int& reference);
	void ReadCharacter(fstream &file, int &reference);
	void Close(int index);
	void CloseAll();
	~FileReader(){}
};
