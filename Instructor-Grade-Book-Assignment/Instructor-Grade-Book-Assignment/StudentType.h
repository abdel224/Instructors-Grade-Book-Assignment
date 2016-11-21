#include "unsortedType.h"
#include <iostream>
#include <string>
using namespace std;


class StudentType
{
public:
	StudentType();
	~StudentType();

	string GetStatus() const;
	void Initialize(string, string, int, string);
	void PersoneType(string, string, int);



private:
	string status;
	string name;
	string lastName;
	int number;

};


