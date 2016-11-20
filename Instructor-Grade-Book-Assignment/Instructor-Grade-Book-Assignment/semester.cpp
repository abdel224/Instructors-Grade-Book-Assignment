#include "semester.h"



semester::semester()
{
	numPrograms = 0;
	weightPercentProgram = 0;
	numTests = 0;
	weightPercentTests = 0;
	numFinalExams = 0;
	weightPercentFinalExams = 0;
}


semester::~semester()
{
}

int semester::getNumberPrograms() const
{
	return numPrograms;
}

int semester::getNumberTests() const
{
	return numTests;
}

int semester::getNumberFinalExam() const
{
	return numFinalExams;
}

int semester::getRelativeWeightPrograms() const
{
	return weightPercentProgram;
}

int semester::getRelativeWeightTests() const
{
	return weightPercentTests;
}

int semester::getRelativeWeightFinalExams() const
{
	return weightPercentFinalExams;
}

void semester::setNumberPrograms(int newNumPrograms)
{
	numPrograms = newNumPrograms;
}

void semester::setNumberTests(int newNumTests)
{
	numTests = newNumTests;
}

void semester::setNumberFinalExams(int newNumFinalExams)
{
	numFinalExams = newNumFinalExams;
}

void semester::setRelativeWeightPrograms(int newRelativeWeightPrograms)
{
	weightPercentProgram = newRelativeWeightPrograms;
}

void semester::setRelativeWeightTests(int newRelativeWeightTests)
{
	weightPercentTests = newRelativeWeightTests;
}

void semester::setRelativeWeightFinalExams(int newRelativeWeightFinalExams)
{
	weightPercentFinalExams = newRelativeWeightFinalExams;
}

void semester::fillSemester()
{
	cout << "How many programming assignments(range 0-6)?: ";
	cin >> numPrograms;
	cout << "What is the relative weight of the programs?: ";
	cin >> weightPercentProgram;
	cout << "How many numbers of tests(range 0-4)?: ";
	cin >> numTests;
	cout << "What is the relative weight of the tests?: ";
	cin >> weightPercentTests;
	cout << "Will there be final exams(If yes enter 1 if not enter 0): ";
	cin >> numFinalExams;
	if (numFinalExams == 1)
	{
		cout << "What is the relative weight of the final exam?: ";
		cin >> weightPercentFinalExams;
		if (weightPercentProgram + weightPercentTests + weightPercentFinalExams != 100)
		{
			cout << "The weight of programs, tests and final exams must have a total of 100%" << " please enter semester information again!" << endl;
			system("pause");
			system("cls");
			fillSemester();

		}
	}
	else
	{
		if (weightPercentProgram + weightPercentTests != 100)
		{
			cout << "The weight of programs and tests must have a total of 100%" << " please enter semester information again!" << endl;
			system("pause");
			system("cls");
			fillSemester();
		}
	}
	printToFile();

}

void semester::printToFile() const
{
	ofstream semesterFile;
	semesterFile.open("SemesterInfo.txt");
	semesterFile << numPrograms << endl;
	semesterFile << weightPercentProgram << endl;
	semesterFile << numTests << endl;
	semesterFile << weightPercentTests << endl;
	if (numFinalExams == 1)
	{
		semesterFile << numFinalExams << endl;
		semesterFile << weightPercentFinalExams << endl;
	}
	else
	{
		semesterFile << " " << endl;

	}
	semesterFile.close();
}

bool semester::fileExists()
{
	ifstream semesterFile;
	semesterFile.open("SemesterInfo.txt");
	return semesterFile.good();
}


