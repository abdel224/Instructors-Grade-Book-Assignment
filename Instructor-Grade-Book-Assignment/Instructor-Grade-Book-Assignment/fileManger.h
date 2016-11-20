#pragma once
#include <iostream>
#include <fstream>

using namespace std;

class fileManger
{
public:
	fileManger();
	~fileManger();
	void OpenInputFile();
	void OpenOutputFile();
	void OpenLogFile();


private:
	ifstream inputFile;
	ofstream outputFile;
	ofstream logFile;
};

