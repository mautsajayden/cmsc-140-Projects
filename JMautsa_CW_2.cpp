/*
 * Class: CMSC140 CRN
 * Instructor:Farnaz Eivazi
 * Project classwork<number>2
 * Description: (Give a brief description for Project) Project displays information about user
 * Due Date:Thursday, September 14,2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: __Jayden Mautsa________
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string NAME = "Jayden Mautsa";
	const string MAJOR = "Computer Science";

	string adress,
		phone_Number;

	cout << "Enter your adress : ";
	getline(cin, adress);
	cout << "Enter your phone number : ";
	cin >> phone_Number;
	cout << endl;

	cout  << NAME << endl << adress << endl  << phone_Number << endl<< MAJOR << endl;

	system("pause");

	return 0;
}
