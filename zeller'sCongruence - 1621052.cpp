// zeller'sCongruence - 1621052.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int zellers(int day, int mnth, int year) //calculates the answers to Zellers
{
	if (mnth == 1 || mnth == 2) // if month is Jan or Feb adds 12 to the month number and subtracts 1 from the year
	{
		mnth = mnth + 12;
		year = year - 1;
	}


	return (((day + (13 * (mnth + 1)) / 5) + year + (year / 4) - (year / 100) + (year / 400)) % 7); //returns the answer to the equation
}

int main()
{
	int day, mnth, year, dayNumber; //define variables
	string userContinue;

	do
	{
		cout << "Enter a date in format DD MM YYYY: \n"; //
		cin >> day >> mnth >> year;                      //gets the users input
		dayNumber = zellers(day, mnth, year);            //sends users date to the function dayNumber
		cout << dayNumber << endl;                         //Outputs the answer from the zellers equation

		switch (dayNumber) //switch statement to workout the day of the week, 0 is Saturday - 6 is Friday
		{
		case 0:
			cout << "That Day is a Saturday \n";
			break;
		case 1:
			cout << "That Day is a Sunday \n";
			break;
		case 2:
			cout << "That Day is a Monday \n";
			break;
		case 3:
			cout << "That Day is a Tuesday \n";
			break;
		case 4:
			cout << "That Day is a Wednesday \n";
			break;
		case 5:
			cout << "That Day is a Thursday \n";
			break;
		case 6:
			cout << "That Day is a Friday \n";
			break;
		default:
			cout << "Please Enter Again \n";
			break;
		}

		cout << "Y to re-enter date or N to exit \n"; //asks user if they wish to continue
		cin >> userContinue;

	}

	while (userContinue == "Y" || userContinue == "y"); //while user enters Y or y program will continue



	return 0;
}



