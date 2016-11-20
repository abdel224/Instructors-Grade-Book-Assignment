#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "mainMenu.h"
#include "unsortedType.h"

using namespace std;

int main() {
	//mainMenu menu;
	//char answer = ' ';

	//do {

	//	menu.print();

	//	cin >> answer;
	//	system("cls");

	//	if (toupper(answer) == 'S')
	//	{
	//		cout << "Set Semester.";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'A')
	//	{
	//		cout << "Add student.";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'P')
	//	{
	//		cout << "Add program grades";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'T')
	//	{
	//		cout << "Add test grades";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'F')
	//	{
	//		cout << "Add final test grades";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'C')
	//	{
	//		cout << "Change a grade for a particular student.";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'G')
	//	{
	//		cout << "Calculate final grade";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'O')
	//	{
	//		cout << "Output the grade data";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}
	//	else if (toupper(answer) == 'Q')
	//	{
	//		cout << "Bye Bye";
	//		cout << endl;
	//		system("pause");
	//		system("cls");
	//	}

	//} while (toupper(answer) != 'Q');
	UnsortedType<int> linkList;

	linkList.PutItem(1);
	linkList.PutItem(2);
	linkList.PutItem(3);

	linkList.ResetList();

	int num = 3;

	linkList.DeleteItem(num);
	linkList.ResetList();

	for (int i = 0; i < linkList.GetLength(); i++)
	{
		cout << linkList.GetNextItem() << endl;
	}
	system("pause");
	return 0;
}