/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 7
 * Description: (Give a brief description for Project)
 * Due Date: 30 November 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: ______jayden Mautsa____
*/

#include <iostream>
#include <string>

using namespace std;

void largerThanN(int[], int, int);

int main()
{
    const int NUM= 10;
	int numbers[NUM] = {30,20,50,2, -1,44,3,12,90,32};
	int userNum=0;

	cout << "Enter a number:\n";
	cin >> userNum;
	
	largerThanN(numbers,NUM,userNum);

	system("pause");

	return 0;
}

void largerThanN(int numbers[], int size, int userNum)
{
	int max = 0;

	cout << "The numbers that are larger than " << userNum << " are:";
	for (int i = 0; i < size; i++)
	{
		if (numbers[i] > userNum)
		{ 
			max = numbers[i];
			cout << max << ' ';
		}	
	}
	cout << endl;
}