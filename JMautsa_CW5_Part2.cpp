/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 5
 * Description: Program that asks human about his info and then writes  the info into a file and then reads that infor out
 * Due Date:October 31 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: _Jayden Mautsa_________
*/

#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	string name,
		streetAdress,
		city,
		state,
		phoneNumber,
		fileName = "List.txt",
		newName,
		newphoneNumber,
		newAdress,
		newCity,
		newState;

	int zipCode = 0,
		newZipcode;

	ofstream outfile(fileName);

	cout << "Enter your name: ";
	getline(cin, name);
	cout << "Enter your phone number: ";
	cin >> phoneNumber;
	cin.ignore();
	cout << "Enter your street address: ";
	getline(cin, streetAdress);
	cout << "Enter your city: ";
	cin >> city;
	cout << "Enter your state: ";
	cin >> state;
	cout << "Enter your zip code: ";
	cin >> zipCode;
	cout << endl;

	if (!(outfile.fail()))
	{
		outfile << name<<endl
			<< phoneNumber << endl
			<< streetAdress << endl
			<< city << endl
			<< state << endl
			<< zipCode;
	}
	else
	{
		cout << "File error" << endl;
	}

	outfile.close();

	ifstream infile(fileName);

	cout  << "This is your information:" << endl <<endl;
	if (!(infile.fail()))
	{
		getline(infile, newName);
		cout << "Name : " << newName << endl;
		getline(infile, newphoneNumber);
		cout << "Phone Number: " << newphoneNumber << endl;
		getline(infile, newAdress);
		cout << "Address: " << newAdress << endl;
		infile >> newCity >> newState >> newZipcode;
		cout << "\t " << newCity << ',' << newState << ',' << newZipcode << endl;
	}
	else
	{
		cout << "File error" << endl;
	}

	infile.close();

	return 0;
}
