/*
*File: M1
*Name: Selby Wilt
*Date: 9/29/22
*Purpose: A program to calculate the total cost of a donut purchase including tax, using
*cashier input of donut types, displaying the total cost and exact amount 
*of each type of physical currency.
*/

#include <iostream>
#include <cmath>
#include <string>
#include <iomanip>
using namespace std;

int main() {

	double numOfFancy;                  //number of fancy donuts ordered                                
	double numOfRegular;                //number of regular donuts ordered
	double numOfFritters;               //number of fritters ordered
	double numOfDozenRegular = 0.0;     //number of dozens of regular donuts ordered                      
	double numOfDozenFancy = 0.0;       //number of dozens of fancy donuts ordered
	double customerPays = 0.0;          //amount the customer pays the cashier (user input)
	double customerOwes = 0.0;          // amount the customer owes the cashier
	double totalBeforeTax;              // total amount calculated before tax is accounted for


	// constants for price of each type of donuts and dozens of donuts
	const double PRICEOFFANCY = .85;                  
	const double PRICEOFREGULAR = .75;
	const double PRICEOFFRITTERS = 1.50;
	const double PRICEOFDOZENREGULAR = 7.99;
	const double PRICEOFDOZENFANCY = 8.49;

	cout << "Number of regular donuts ordered: ";   //ask for input for number of regular donuts ordered
	cin >> numOfRegular;
	
	cout << "Number of fancy donuts ordered: ";     //ask for input for fancy donuts
	cin >> numOfFancy;

	cout << "Number of apple fritters ordered: ";   //ask for input for apple fritters
	cin >> numOfFritters;

	/*
	* if the customer orders 12 or more fancy or regular donuts, it will subtract 12 from it's donut value,
	* adding 1 to the dozen donut value until the  regular or fancy donut value is less than 12.
	*/ 

	while (numOfFancy >= 12) 
	{
		numOfDozenFancy ++;
		numOfFancy = numOfFancy - 12;
	}

	while (numOfRegular >= 12) 
	{
		numOfDozenRegular ++;
		numOfRegular = numOfRegular - 12;
	}

	/*
	* calculating the amount the customer owes before tax by adding all of the variables together
	* and multiplying by their constant's corresponding values taking into account the dozen donuts ordered
	*/
	
	totalBeforeTax = (numOfFancy * PRICEOFFANCY) + (numOfRegular * PRICEOFREGULAR) + 
		(numOfFritters * PRICEOFFRITTERS) + (numOfDozenRegular * PRICEOFDOZENREGULAR)
		+ (numOfDozenFancy * PRICEOFDOZENFANCY);

	//constant integers for the types of physical money (multiplied by 100 for integers)
	const int DOLLARS = 100;
	const int QUARTERS = 25;
	const int NICKELS = 5;
	const int DIMES = 10;
	const int PENNIES = 1;

	// taxrate is stated to be 7.5% in vandalia Ohio, so the constant tax variable would be 1.075
	const double TAXRATE = 1.075;

	double changeDue = 0.0;         //change the customer is to be payed to the cashier
	int quartersOwed;
	int dollarsOwed;
	int dimesOwed;
	int nickelsOwed;
	int penniesOwed;       
	int changeDueInt;      //change due as an integer (multiplied by 100)
	double total;          //total amount the customer owes
	
	//calculating the tax rate, it is multiplied by 100 before rounding to avoid rounding errors
	total = totalBeforeTax * TAXRATE;
	total = total * 100;
	total = round(total);
	total = total / 100;

	cout << "Customer Owes $" << total;     // displays the total amount owed

	cout << endl << "Customer payes $ ";    //prompts user to input amount the customer paid
	cin >> customerPays;

	//calculating the change due using the diffrence between amount the customer paid and the total
	changeDue = (customerPays - total);     
	cout << endl << "Change Owed is $";     //displaying the change the customer needs to receive
	cout << changeDue << " - ";             

	changeDueInt = changeDue * 100;         //converting changedue to an integer
	
	/*
	* Calculating and displaying to the user the amount of each type of change
	* to give to the customer, taking into account if it is plural or singular,
	* dividing the change due by each type of coinages constant, then removing it from the total
	*/

	if (changeDueInt >= 100) {             //calculating the amount of dollars 
		dollarsOwed = (changeDueInt / DOLLARS);
		changeDueInt = changeDueInt - dollarsOwed * (DOLLARS);
		if (dollarsOwed > 1) {             // nested if statement for if dollars are plural
			cout << dollarsOwed << " dollars, ";
		}                            
		if (dollarsOwed == 1)              // if dollar owed is 1, it will be singular
			cout  << " 1 dollar, ";
	}

	if (changeDueInt >= 25) {              //calculating the amount of quarters
		quartersOwed = (changeDueInt / QUARTERS);
		changeDueInt = changeDueInt - quartersOwed * (QUARTERS);
		if (quartersOwed > 1)              // nested if statement for if quarters are plural
		{           
			cout << quartersOwed << " quarters, ";
		}
		if (quartersOwed == 1)             // if quarter owed is 1, it will be singular
			cout << " 1 quarter, ";
	}

	if (changeDueInt >= 10) {              //calculating the amount of dimes
		dimesOwed = (changeDueInt / DIMES);
		changeDueInt = changeDueInt - dimesOwed * (DIMES);
		if (dimesOwed > 1)                 // nested if statement for if dimes are plural
		{           
			cout << dimesOwed << " dimes, ";
		}
		if (dimesOwed == 1)                // if dime owed is 1, it will be singular
			cout << " 1 dime, ";
	}

	if (changeDueInt >= 5) {               //calculating the amount of nickels
		nickelsOwed = (changeDueInt / NICKELS);
		changeDueInt = changeDueInt - nickelsOwed * (NICKELS);
		if (nickelsOwed > 1)			   // nested if statement for if nickels are plural
		{           
			cout << nickelsOwed << " nickles, ";
		}
		if (nickelsOwed == 1)              // if nickels owed is 1, it will be singular
			cout << " 1 nickel, ";
	}

	if (changeDueInt >= 1) {               //calculating the amount of pennies
		penniesOwed = (changeDueInt / PENNIES);
		changeDueInt = changeDueInt - penniesOwed * (PENNIES);
		if (penniesOwed > 1)               // nested if statement for if pennies are plural
		{           
			cout << penniesOwed << " pennies.";
		}
		if (penniesOwed == 1)              // if pennys owed is 1, it will be singular
			cout << " 1 penny.";
	}

	return 0;
}