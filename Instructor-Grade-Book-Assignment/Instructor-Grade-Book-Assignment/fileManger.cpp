#include "fileManger.h"



fileManger::fileManger()
{
}


fileManger::~fileManger()
{
}

void fileManger::OpenInputFile()
{
	inputFile.open("grades.dat");
}

void fileManger::OpenOutputFile()
{
	outputFile.open("grades.out");
}

void fileManger::OpenLogFile()
{
	logFile.open("grades.log");
}
