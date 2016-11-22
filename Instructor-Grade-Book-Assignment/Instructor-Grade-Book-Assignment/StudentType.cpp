#include "StudentType.h"
#include <iostream>
#include <string>
using namespace std;



StudentType::StudentType()
{
	name = "";
	lastName = "";
	number = 0;
}



string StudentType::GetStatus() const
{
	return status;
}


void StudentType::Initialize(string newName, string newLastNmae, int newNumber, string newStatus)
{
	status = newStatus;
	
}


void StudentType::PersoneType(string, string, int)
{

}

void StudentType::readFile()
{
}

void StudentType::pritnToFile()
{
	studentCount++;
	string arrayName[20];
	string arrayLastName[20];
	int arrayID [4];

	string *arrayName = new (nothrow) string[20];
	string * arrayLastName = new (nothrow) string[20];
	int *arrayID = new (nothrow) int[4];

	
		arrayName[studentCount] = name;
		arrayLastName[studentCount] = lastName;
		arrayID[studentCount] = number;

	

	int i;

	for (i = 0; i < studentCount; i++)
	{
		
	}
}

void StudentType::setStudent()
{
	//Keep the total of students
	studentCount++;

	cout << "Enter the Student Last Name:" << endl;
	cin >> lastName;
	cout << "Enter the Student First Name:" << endl;
	cin >> name;
	cout << "Enter Student Number (range 1 - 9999): " << endl;
	cin >> number;

	// search en el file que ya el nombre y/o num del estudiante no exista

	//si el nombre y apellido ya esta muestra mensaje

	//else if num de estudiante esta mostrar mensaje

	//arrayName = new (nothrow) string [20];
	//arrayLastName = new (nothrow) string[20];
	//arrayID = new (nothrow) int[20];

	pritnToFile();
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




