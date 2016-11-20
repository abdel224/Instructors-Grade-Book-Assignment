#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class semester 
{
public:
	semester();
	~semester();
	//Accessor Functions
	int	getNumberPrograms() const;
	int getNumberTests() const;
	int getNumberFinalExam() const;
	int getRelativeWeightPrograms() const;
	int getRelativeWeightTests() const;
	int getRelativeWeightFinalExams() const;

	//Mutator Functions
	void setNumberPrograms(int);
	void setNumberTests(int);
	void setNumberFinalExams(int);
	void setRelativeWeightPrograms(int);
	void setRelativeWeightTests(int);
	void setRelativeWeightFinalExams(int);
	void fillSemester();
	void printToFile() const;
	bool fileExists();
private:
	int numPrograms;
	int weightPercentProgram;
	int numTests;
	int weightPercentTests;
	int numFinalExams;
	int weightPercentFinalExams;
};

