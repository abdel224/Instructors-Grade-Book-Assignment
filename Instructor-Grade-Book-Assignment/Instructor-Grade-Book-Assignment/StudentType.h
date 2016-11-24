#include "unsortedType.h"
#include <iostream>
#include <string>
#include "semester.h"
using namespace std;

struct StudentName
{
	string dataName;
	StudentName *next;
};

struct StudentLastName
{
	string dataLast;
	StudentLastName *next;
};

struct StudentID
{
	string dataID;
	StudentID *next;
};


class StudentType
{
public:
	StudentType();
	~StudentType();

//	string GetStatus() const;
//	void Initialize(string, string, int, string);
	void PersoneType(string, string, int);

	bool IsFull() const;
	int GetNumStudent() const;
	void readFile();
	void setStudent(); //Inster Student
	void deleteStudent(); //Deletes Student
	void setGrade();
	void CalculateFinalGrade();
	void pritnToFile(); //Show



private:
	
	int ID;
	int studentCount; //length
	string status;
	string name;
	string lastName;
//	int totalProgramPercent;
//	int totalExamPercent;
//	int finalExamPercent;
	StudentName *startName;
	StudentLastName* startLast;
	StudentID* startID;

};


