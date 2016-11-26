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
		menu.print();
		cin >> answer;
		system("cls");

		if (toupper(answer) == 'S')
		{
			char option;
			if (semesterSet.fileExists() == true)
			{
				cout << "Semester is created information will be overwrited are you sure?(Y/N)" << endl;
			}
			cin >> option;
			if (toupper(option) == 'N')
			{
				system("cls");
				main();
			}
			else
			{
				semesterSet.fillSemester();
				cout << endl;
				system("pause");
				system("cls");
			}

		}
		else if (toupper(answer) == 'A')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Add student.";
				cout << endl;
				system("pause");
				system("cls");
			}
	
		}
		else if (toupper(answer) == 'P')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			cout << "Add program grades";
			cout << endl;
			system("pause");
			system("cls");
		}
		else if (toupper(answer) == 'T')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Add test grades";
				cout << endl;
				system("pause");
				system("cls");
			}

		}
		else if (toupper(answer) == 'F')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Add final test grades";
				cout << endl;
				system("pause");
				system("cls");
			}

		}
		else if (toupper(answer) == 'C')
		{
			if (semesterSet.fileExists() == false)

			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Change a grade for a particular student.";
				cout << endl;
				system("pause");
				system("cls");
			}

		}
		else if (toupper(answer) == 'G')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Calculate final grade";
				cout << endl;
				system("pause");
				system("cls");
			}

		}
		else if (toupper(answer) == 'O')
		{
			if (semesterSet.fileExists() == false)
			{
				cout << "Semester isn't set yet do this First!" << endl;
				system("pause");
				system("cls");
				main();
			}
			else
			{
				cout << "Output the grade data";
				cout << endl;
				system("pause");
				system("cls");
			}

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