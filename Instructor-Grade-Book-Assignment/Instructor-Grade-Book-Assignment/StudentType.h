#include "unsortedType.h"
#include <iostream>
#include <string>
//#include "PersonType.h"
using namespace std;

template <class ItemType>


class StudentType
{
public:
	StudentType();
	~StudentType();

	string GetStatus() const;
	void Initialize(string, string, int, string);
	void PersoneType(string, string, int);
	ItemType Student();



private:
	string status;
	string name;
	string lastName;
	int number;

};


