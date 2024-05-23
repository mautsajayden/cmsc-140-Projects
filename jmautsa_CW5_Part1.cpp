/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 5 
 * Description: Program that uses loops to keep on repeating asteriks until a certain condition is met (false)
 * Due Date:October 31 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: _Jayden Mautsa_________
*/

#include <iostream>
#include <string>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{

	const char STAR = '*';
	const int TEN = 10, TWENTY = 20;

	//Part 1 

	//First section (i)

	int num=0;

	while (num < TEN)
	{
		cout << STAR;
		++num;
	}

	cout << endl << endl;

	//second section (ii)

	num = 0;
	do
	{
		cout << STAR;
		num++;
	} while (num < TWENTY);
	
	cout << endl << endl;

	//third section (iii)

	int i, j;

	for (i=1; i <= TEN; i++)
	{
		for (j=1; j <= i; j++)
		{
			cout << STAR;
		}
		cout << endl;
	}

	cout << endl << endl;

	//fourth section (iv)
	
	for (i = 1; i <= TWENTY; i++)
	{
		for (j = 1; j <= i; j++)
		{
			cout << STAR;
		}
		cout << endl;
	}

	cout << endl << endl;

	//fifth section (v)

	for (i = TEN; i >=1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			cout << STAR;
		}
		cout << endl;
	}

	cout << endl << endl;

	//sixth section (vi)

	for (i = TWENTY; i >= 1; i--)
	{
		for (j = i; j >= 1; j--)
		{
			cout << STAR;
		}
		cout << endl;
	}

	cout << endl << endl;

	return 0;
}

