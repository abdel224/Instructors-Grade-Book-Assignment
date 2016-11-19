#include "mainMenu.h"

using namespace std;

void mainMenu::print()
{
	cout << "       Menu" << endl;
	cout << "(S)Set up for new semester." << endl;
	cout << "(A)Add a student." << endl;
	cout << "(P)Record programming assignment grade for all students." << endl;
	cout << "(T)Record test grade for all students. " << endl;
	cout << "(F)Record Final exam grade for all students." << endl;
	cout << "(C)Change a grade for a particular student. " << endl;
	cout << "(G)Calculate final grade" << endl;
	cout << "(O)Output the grade data, ordered alphabetically by name (last name/first name) or by student number (in increasing order)." << endl;
	cout << "(Q)Quit" << endl;
	cout << "Which of the above do you wish to do, enter the letter:  ";
}
