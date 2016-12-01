#include "StudentType.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;



StudentType::StudentType()
{
	name = "";
	lastName = "";
	ID = 0;
	studentCount = 0;
	startName = NULL;
	startLast = NULL;
	startID = NULL;
}



void StudentType::PersoneType(string, string, int)
{

}

bool StudentType::IsFull() const
{
	return false;
}

int StudentType::GetNumStudent() const
{
	return studentCount;
}

void StudentType::readFile()
{
	string usr;
	out.open("grades.txt");
	usr = "Prueba";
	out << usr;
}

void StudentType::pritnToFile()
{
	string usr;
	StudentName* tempName = startName;
	StudentLastName* tempLast = startLast;
	StudentID* tempID = startID;

	out.open("grades.txt");

	usr = tempName->dataName + " " + tempLast->dataLast + " " + tempID->dataID;
	out << usr << endl;
	tempName = tempName->next;
	tempLast = tempLast->next;
	tempID = tempID->next;

/*	while (tempName != NULL && tempLast != NULL && tempID != NULL)
	{
		usr = tempName->dataName + " " + tempLast->dataLast + " " + tempID->dataID;
	    out << usr << endl;
		tempName = tempName->next;
		tempLast = tempLast->next;
		tempID = tempID->next;
	}*/
}

void StudentType::setStudent()
{
	cout << "Enter the Student Last Name:" << endl;
	cin >> lastName;
	cout << "Enter the Student First Name:" << endl;
	cin >> name;
	cout << "Enter Student Number (range 1 - 9999): " << endl;
	cin >> ID;

	StudentName* tempName = new StudentName;
	StudentLastName *tempLastName = new StudentLastName;
	StudentID *tempID = new StudentID;

	tempName->dataName = name;
	tempLastName->dataLast = lastName;
	tempID->dataID = ID;
	tempName->next = startName;
	tempLastName->next = startLast;
	tempID->next = startID;

	startName = tempName;
	startLast = tempLastName;
	startID = tempID;
	//Keep track of the total of students
	studentCount++;
	pritnToFile();

	// search en el file que ya el nombre y/o num del estudiante no exista

	//si el nombre y apellido ya esta muestra mensaje

	//else if num de estudiante esta mostrar mensaje

}

void StudentType::deleteStudent()
{
}

void StudentType::setGrade()
{
}

void StudentType::CalculateFinalGrade()
{
}

StudentType::~StudentType()
{
}




