/*
 * Class: CMSC140 CRN
 * Instructor:Farnaz Eivarzi
 * Project<number> 4
 * Description: A basic cacualtor thats computes the total cost of tickets sold at Walt Disney World
 * Due Date:10/5/2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: __Jayden Mautsa________
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double
		TICKET_COST = 109,
		DISCOUNT_ONE = .10,
		DISCOUNT_TWO = .25,
		DISCOUNT_THREE = .33,
		DISCOUNT_FOUR = .42;

		int ticketsSold = 0;

	double totalCost = 0;

	bool
		isGreaterthan0,
		isEqualto1and2,
		isEqual3and4,
		isEqual5and6,
		isBetween7and9;

	cout << "How many days of tickets were sold? ";
	cin >> ticketsSold;


	    isGreaterthan0 = (ticketsSold > 0),
		isEqualto1and2 = (ticketsSold == 1 || ticketsSold == 2),
		isEqual3and4 = (ticketsSold == 3 || ticketsSold == 4),
		isEqual5and6 = (ticketsSold == 5 || ticketsSold == 6),
		isBetween7and9 = (ticketsSold >= 7 && ticketsSold <= 9);

	if (isGreaterthan0)
	{
		if (isEqualto1and2)
			totalCost = ticketsSold * TICKET_COST;
		else if (isEqual3and4)
			totalCost = (TICKET_COST * ticketsSold) - ((TICKET_COST * ticketsSold) * DISCOUNT_ONE);
		else if (isEqual5and6)
			totalCost = (TICKET_COST * ticketsSold) - ((TICKET_COST * ticketsSold) * DISCOUNT_TWO);
		else if (isBetween7and9)
			totalCost = (TICKET_COST * ticketsSold) - ((TICKET_COST * ticketsSold) * DISCOUNT_THREE);
		else
			totalCost = (TICKET_COST * ticketsSold) - ((TICKET_COST * ticketsSold) * DISCOUNT_FOUR);
	}
	else
	{
		cout << "Tickets sold must be greater than zero.";
		cout << endl;
		system("pause");

		return 0;
	}
		

	cout << "The total cost of the purchase is $" << setprecision(2) << fixed << totalCost<<endl;
	 
	system("pause");

	return 0;
}