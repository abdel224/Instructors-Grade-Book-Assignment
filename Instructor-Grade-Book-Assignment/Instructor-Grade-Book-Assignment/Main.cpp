#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "mainMenu.h"
#include "semester.h"

using namespace std;

int main() {
	mainMenu menu;
	semester semesterSet;
	char answer = ' ';

	do {
		if (semesterSet.fileExists() == true)
		{
			cout << "Semester is set dont press S!!!" << endl;
		}
		else
		{
			cout << "Semester isn't set yet do this First!" << endl;
		}

		menu.print();
		cin >> answer;
		system("cls");

		if (toupper(answer) == 'S')
		{
			semesterSet.fillSemester();
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'A')
		{
			cout << "Add student.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'P')
		{
			cout << "Add program grades";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'T')
		{
			cout << "Add test grades";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'F')
		{
			cout << "Add final test grades";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'C')
		{
			cout << "Change a grade for a particular student.";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'G')
		{
			cout << "Calculate final grade";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'O')
		{
			cout << "Output the grade data";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'Q')
		{
			cout << "Bye Bye";
			cout << endl;
			system("pause");
			system("cls");
		}

	} while (toupper(answer) != 'Q');

	return 0;
}