/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 6
 * Description: A simple caculator that can subtract and add two numbers
 * Due Date: 9 November 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: ____Jayden Mautsa______
*/



#include <iostream>
#include <vector>

using namespace std;

int getChoice();

bool validateChoice(int);

void getNumbers(int&,int&);

int addition(int, int);

int subtraction(int, int);

int main()
{
	int choice = 0,
		num1=0,
		num2=0,
		result =0;

	choice=getChoice();

	if (validateChoice(choice))
	{
		getNumbers(num1, num2);

		if (choice == 1)
		{
			result = addition(num1, num2);
		}
		else
		{
			result = subtraction(num1, num2);
		}

		cout << "The result of the operation is: " << result << endl << endl;
	}
	else
		return 0;

	system("pause");

	return 0;
}

int getChoice()
{
	int choice = 0;
	cout << "Enter your choice, 1 for Addition, 2 for Subtraction:";
	cin >> choice;
	return choice;
}

bool validateChoice(int choice1)
{
	if (choice1 == 1 || choice1 == 2)
	{
		return true;
	}
	else
	{
		cout << endl << endl;
		cout << "Invalid choice of the operation. Try again" << endl;
		return  false;
	}
}

void getNumbers(int&num1, int&num2)
{
	cout << "Enter first number:";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;
}

int addition(int num1, int num2)
{
	int result = num1 + num2;
	return result;
}

int subtraction(int num1, int num2)
{
	int result = num1 - num2;
	return result;
}


