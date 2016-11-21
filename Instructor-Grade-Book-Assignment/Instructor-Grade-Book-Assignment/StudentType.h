#include "unsortedType.h"
#include <iostream>
#include <string>
#include "semester.h"
using namespace std;


class StudentType
{
public:
	StudentType();
	~StudentType();

	string GetStatus() const;
	void Initialize(string, string, int, string);
	void PersoneType(string, string, int);

	void readFile();
	void pritnToFile();
	void setStudent();
	void setGrade();
	void CalculateFinalGrade();
	



private:
	string status;
	string name;
	string lastName;
	int number;
	int studentCount = 0;

	int totalProgramPercent;
	int totalExamPercent;
	int finalExamPercent;

	int numPrograms;
	int numExams;
	int numFinalExam;


};


