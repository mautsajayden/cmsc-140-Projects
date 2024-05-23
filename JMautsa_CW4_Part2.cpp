/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz Eivarzi
 * Project<number> 4 
 * Description: (Give a brief description for Project)
 * Due Date: 10/5/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: _____Jayden Mautsa_____
*/

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;

int main()
{
	const double

		BASE_PRICE1 = 250,
		BASE_PRICE2 = 325,
		BASE_PRICE3 = 450,
		BASE_PRICE4 = 625,
		BASE_PRICE5 = 850,

		LIGHTED_SIGNS = .25,
		REMOVAL_OF_OLD_SIGNS = .10;

	int numColors = 0;

	double price = 0,
		amount, 
		final_Amount;

	char answer,
		answer2;

	bool
		isBothtrue,
		isTrueandfalse,
		isFalseandTrue;

	
		cout << "Enter the number of colors in the sign: ";
		cin >> numColors;
		

		
		if (numColors > 0)
		{
			switch (numColors)
			{
			case 1:
				amount = BASE_PRICE1;
				break;
			case 2:
				amount = BASE_PRICE2;
				break;
			case 3:
				amount = BASE_PRICE3;
				break;
			case 4:
				amount = BASE_PRICE4;
				break;
			default:
				amount = BASE_PRICE5;
			}

			cout << "Do you want a lighted sign(y/n)? ";
			cin >> answer;
		
			cout << "Do you need an old sign removed(y/n)? ";
			cin >> answer2;
			
			isBothtrue = (answer == 'y' && answer2 == 'y'),
				isTrueandfalse = (answer == 'y' && answer2 == 'n'),
				isFalseandTrue = (answer == 'n' && answer2 == 'y');

			if (isBothtrue)
			{
				price = LIGHTED_SIGNS + REMOVAL_OF_OLD_SIGNS;
			}
			else if (isTrueandfalse)
			{
				price = LIGHTED_SIGNS;
			}
			else if (isFalseandTrue)
			{
				price = REMOVAL_OF_OLD_SIGNS;
			}
			else
			{
				price;
			}

			final_Amount = amount + (amount * price);

			cout << "The price is: " << setprecision(2) << fixed << final_Amount << endl;;
		}
		else
		{
			cout << "Invalid number of colors; it must be greater than zero." << endl;

			system("pause");

			return 0;
		}

		system("pause");
	return 0;
}