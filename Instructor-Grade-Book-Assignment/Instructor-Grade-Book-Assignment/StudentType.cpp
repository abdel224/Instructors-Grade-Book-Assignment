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
	//PersoneType::Initialize(newName, newLastName, newNumber);
}


void StudentType::PersoneType(string, string, int)
{

}

StudentType::~StudentType()
{
}




