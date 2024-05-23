/*
 * Class: CMSC140 CRN
 * Instructor: Farnaz  Eivarzi
 * Project<number> 6 
 * Description: programs that works as a shop caculator
 * Due Date: 9 November 2023
 * I pledge that I have completed the programming assignment independently.
   I have not copied the code from a student or any source.
   I have not given my code to any student.
   Print your Name here: ____Jayden Mautsa______
*/

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

double showMenu();

double takePurchase(double);

int takePayment();

void displayInfo(double,int);


int main()
{
	double price = 0,
		purchasePrice = 0;
	int	pay =0;

	price = showMenu();

	if (price == 0)
		return 0;
	else 
	{
		purchasePrice = takePurchase(price);

		pay = takePayment();

		displayInfo(purchasePrice, pay);
	}
	
	system("pause");

	return 0;
}

double showMenu(){

	const double COKE_PRICE = 1.25,
		PEPSI_PRICE = 1.00,
		WATER_PRICE = 2.00,
		COFFEE_PRICE = 1.50;

	int choice = 0;
	double  price = 0;

	cout << fixed << showpoint << setprecision(2);
	cout << "**** Vending Machine ****" << endl;
	cout << " 1. Coke  $" << COKE_PRICE
		<< "\n 2. Pepsi  $" << PEPSI_PRICE
		<< "\n 3. Water  $" << WATER_PRICE
		<< "\n 4. Coffee  $" << COFFEE_PRICE
		<< "\n 5. Exit Menu " << endl << endl;
	cout << "Enter your Choice :";
	cin >> choice;

	switch (choice)
	{
	case 1:
		price = COKE_PRICE;
		break;
	case 2:
		price = PEPSI_PRICE;
		break;
	case 3:
		price = WATER_PRICE;
		break;
	case 4:
		price = COFFEE_PRICE;
		break;
	default:
		price = 0;
		break;
	}
	return price;
}

double takePurchase(double price){

	int quantity = 0;
	double	purchasePrice =0;

	cout << "How much do you want?";
	cin >> quantity;

	return purchasePrice = (price * quantity);
}

int takePayment(){
    int pay = 0;

	cout << "How much is your payment?";
	cin >> pay;

	return pay;
}

void displayInfo(double purchase, int payment)
{
	double tax =0,
		totalPurchase=0,
		change = 0;
	tax = purchase * 0.06;
	totalPurchase = purchase + tax;
	change = payment - totalPurchase;

	cout << endl << endl;
	cout << fixed <<showpoint<< setprecision(2);
	cout << "Tax Amount : $" << tax
		<< "\n\nTotal Purchase :$" << totalPurchase
		<< "\n\nchange : $" << change << endl << endl;
}