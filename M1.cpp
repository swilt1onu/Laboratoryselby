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

	double numOfFancy;                  // number of fancy donuts ordered                                
	double numOfRegular;                // number of regular donuts ordered
	double numOfFritters;               // number of fritters ordered
	double numOfDozenRegular = 0.0;     // number of dozens of regular donuts ordered                      
	double numOfDozenFancy = 0.0;       // number of dozens of fancy donuts ordered
	double customerPays = 0.0;          // amount the customer pays the cashier (user input)
	double customerOwes = 0.0;          // amount the customer owes the cashier
	double totalBeforeTax;              // total amount calculated before tax is accounted for


	// constants for price of each type of donuts and dozens of donuts
	const double PRICEOFFANCY = .85;
	const double PRICEOFREGULAR = .75;
	const double PRICEOFFRITTERS = 1.50;
	const double PRICEOFDOZENREGULAR = 7.99;
	const double PRICEOFDOZENFANCY = 8.49;


	//Getting the inputs of each of the types of donuts from the user
	cout << "Number of regular donuts ordered: ";   //ask for input for number of regular donuts ordered
	cin >> numOfRegular;

	cout << "Number of fancy donuts ordered: ";     //ask for input for fancy donuts
	cin >> numOfFancy;

	cout << "Number of apple fritters ordered: ";   //ask for input for apple fritters
	cin >> numOfFritters;


	//if the customer orders 12 or more fancy or regular donuts, it will subtract 12 from it's donut value,
	//adding 1 to the dozen donut value until the  regular or fancy donut value is less than 12. 
	while (numOfFancy >= 12)
	{
		numOfDozenFancy++;
		numOfFancy = numOfFancy - 12;
	}

	while (numOfRegular >= 12)
	{
		numOfDozenRegular++;
		numOfRegular = numOfRegular - 12;
	}



	//calculating the amount the customer owes before tax by adding all of the variables together
	//and multiplying by their constant's corresponding values taking into account the dozen donuts ordered
	totalBeforeTax = (numOfFancy * PRICEOFFANCY) + (numOfRegular * PRICEOFREGULAR) +
		(numOfFritters * PRICEOFFRITTERS) + (numOfDozenRegular * PRICEOFDOZENREGULAR)
		+ (numOfDozenFancy * PRICEOFDOZENFANCY);


	const int DOLLARS = 100;           // constant integer for dollars 
	const int QUARTERS = 25;           // constant integer for quarters
	const int NICKELS = 5;             // constant integer for nickels
	const int DIMES = 10;              // constant integer for dimes
	const int PENNIES = 1;             // constant integer for pennies


	const double TAXRATE = 1.075;      // taxrate is stated to be 7.5% in vandalia Ohio
	double changeDue = 0.0;            // change the customer is to be payed to the cashier
	int changeDueInt = 0;              // change due as an integer
	double total;                      // total amount the customer owes


	int quartersOwed = 0;              // number of quarters owed
	int dollarsOwed = 0;	           // number of dollars owed
	int dimesOwed = 0;		           // number of dimes owed
	int nickelsOwed = 0;	           // number of nickles owed
	int penniesOwed = 0;               // number of pennies owed


	//calculating the tax rate, multiplying by 100 before rounding to avoid rounding errors, then dividing back
	total = totalBeforeTax * TAXRATE;
	total = total * 100;
	total = round(total);
	total = total / 100;

	cout << fixed;                          //ensures 2 decimal places after the dollar since it is money
	cout << setprecision(2);
	cout << "Customer Owes $" << total;     // displays the total amount owed

	cout << endl << "Customer payes $ ";    //prompts user to input amount the customer paid
	cin >> customerPays;


	//calculating the change due using the diffrence between amount the customer paid and the total
	changeDue = (customerPays - total);


	//telling the cashier that no change is owed when change due is 0
	if (changeDue == 0)
	{
		cout << "Exact payment received - no change owed";
	}
	else
	{
		cout << endl << "Change owed is $";  //displaying the change the customer needs to receive
		cout << changeDue << " - ";
	}


	//converting changedue to an integer by multiplying by 100 and rounding to avoid errors
	changeDueInt = round(changeDue * 100);


	//calculating the amount of each coins due by dividing each by their constant value, then removing that amount
	dollarsOwed = (changeDueInt / DOLLARS);                           
	changeDueInt = changeDueInt - dollarsOwed * (DOLLARS);

	quartersOwed = (changeDueInt / QUARTERS);
	changeDueInt = changeDueInt - quartersOwed * (QUARTERS);

	dimesOwed = (changeDueInt / DIMES);
	changeDueInt = changeDueInt - dimesOwed * (DIMES);

	nickelsOwed = (changeDueInt / NICKELS);
	changeDueInt = changeDueInt - nickelsOwed * (NICKELS);

	penniesOwed = (changeDueInt / PENNIES);
	changeDueInt = changeDueInt - penniesOwed * (PENNIES);


	//Calculating and displaying to the user the amount of each type of change
	//to give to the customer, taking into account if it is plural or singular.
	//Also taking into account that there needs to be a period after the last value
	//dividing the change due by each type of coinages constant, then removing it from the total

	if (dollarsOwed > 0) //displaying the amount of dollars
	{
		if (dollarsOwed > 1 && quartersOwed == 0 && nickelsOwed == 0 && penniesOwed == 0 && dimesOwed == 0)
		{
			cout << dollarsOwed << " dollars.";
		}
		else if (dollarsOwed == 1 && quartersOwed == 0 && nickelsOwed == 0 && penniesOwed == 0 && dimesOwed == 0)
		{
			cout << " 1 dollar.";
		}
		else if (dollarsOwed > 1) 
		{
			cout << dollarsOwed << " dollars, ";
		}
		else if (dollarsOwed == 1)              
		{
			cout << " 1 dollar, ";
		}
	}   

	if (quartersOwed > 0) //displaying the amount of quarters
	{
		if (quartersOwed > 1 && nickelsOwed == 0 && penniesOwed == 0 && dimesOwed == 0)  
		{
			cout << dimesOwed << " quarters.";
		}
		else if (quartersOwed == 1 && nickelsOwed == 0 && penniesOwed == 0 && dimesOwed == 0) 
		{
			cout << " 1 quarter.";
		}
		else if (quartersOwed > 1)           
		{
			cout << quartersOwed << " quarters, ";
		}
		else if (quartersOwed == 1)             
			cout << " 1 quarter, ";
	}

	if (dimesOwed > 0) //displaying the amount of dimes
	{
		if (dimesOwed > 1 && nickelsOwed == 0 && penniesOwed == 0)  
		{
			cout << dimesOwed << " dimes.";
		}
		else if (dimesOwed == 1 && nickelsOwed == 0 && penniesOwed == 0) 
		{
			cout << " 1 dime.";
		}
		else if (dimesOwed > 1)                 
		{
			cout << dimesOwed << " dimes, ";
		}
		else if (dimesOwed == 1)                
			cout << " 1 dime, ";
	}

	if (nickelsOwed > 0) //displaying the amount of nickels
	{
		if (nickelsOwed > 1  && penniesOwed == 0)
		{
			cout << nickelsOwed << " nickels.";
		}
		else if (nickelsOwed == 1 && penniesOwed == 0) 
		{
			cout << " 1 nickel.";
		}
		else if (nickelsOwed > 1)			   
		{
			cout << nickelsOwed << " nickles, ";
		}
		else if (nickelsOwed == 1)             
			cout << " 1 nickel, ";
	}

	if (penniesOwed > 0) //displaying the amount of pennies
	{
		
		if (penniesOwed > 1)               // nested if statement for if pennies are plural
		{
			cout << penniesOwed << " pennies.";
		}
		if (penniesOwed == 1)              // if pennys owed is 1, it will be singular
		{
			cout << " 1 penny.";
		}
	}

	return 0;
}