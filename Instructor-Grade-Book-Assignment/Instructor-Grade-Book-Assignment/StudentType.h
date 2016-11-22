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
	
	int number;
	int studentCount = 0;
	string status;
	string name;
	string lastName;
	int totalProgramPercent;
	int totalExamPercent;
	int finalExamPercent;

	int numPrograms = 0;
	int numExams = 0;
	int numFinalExam = 0;


};


