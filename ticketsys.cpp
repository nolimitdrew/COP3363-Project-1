/* Name: Andrew Stade
Date: 1/17/2019
Section: 0004
Assignment: Homework #1
Due Date: 1/23/2019
About this project: The objective of this assignment is to demonstrate basic knowledge of using pico, basic c++ commands and features, running a file, and compiling a file.
Assumptions: The user will input only postive integers or zero.

All work below was performed by Andrew Stade */



#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{

	/*Hello! Welcome to my code for my first ever assignment in coding. First I'd like to apoligize with any issues with the code.
	To be honest I have never coded a day in my life. However, I hopefully don't cause too much confusion. Thank you!! */


	cout << "\n***FSU Football Ticket Calculator***" << endl;	
	const double adltCost = 28.50; const double chldCost = 12.50; const double sniorCost = 16.50;	
	int numAdlt; int numChld; int numSen;


	/*To begin the commentary, I believed it was important to immediately state the cost of each ticket in shortened but 
	understandable variables such as "adltCost" being "Adult Cost", "chldCost" being "Child Cost", finally "sniorCost" 
	being "Senior Cost". Also the int values could have been placed later, however since the prices were already being
	declared, I figured I would declare the number of tickets would be integers as well. */	
	

	cout << "Please enter the number of:" << endl;
	cout << "\tAdults" << endl;
	cout << "\tChildren(up to age 9)" << endl;
	cout << "\tSeniors(55+)" << endl;
	cout << "Adults --> " ;
	cin >> numAdlt; 	
	cout << "Children --> " ; 
	cin >> numChld;	
	cout << "Seniors --> " ; 
	cin >> numSen;

 	
	/*This part is pretty self explanatory, the user enters the amount of tickets they would like to purchase for each type of person
	(Adult, Child, or Senior) and even works with values of 0. */


	cout << "-------------------------------" << endl;
	cout << fixed << showpoint << setprecision(2);
	cout << "TOTAL (before tax) = $" << (numAdlt*adltCost)+(numChld*chldCost)+(numSen*sniorCost) << endl;


	/*This is where things get tricky, I created an equation multiply the two variables for each type of ticket,
	then they would be added together to create a total. I feared the variable names were too long, but using simple
	letters like "x,y,z" would give no indication of what the variables are representing.*/


	const double TOTALb = (numAdlt*adltCost)+(numChld*chldCost)+(numSen*sniorCost); 
	const double tax = 0.07;	
	cout << "Tax = $" << TOTALb*tax << endl;	
	const double TOTALa = (TOTALb*tax)+TOTALb;
	cout << "TOTAL COST (after tax) = $" << TOTALa << endl;	


	/*Without a doubt the hardest part here. I was unable to figure out how to have a variable equal an equation in the same
	line the equation was being performed. Instead I decided to rewrite the equation and state the solution to the equation as
	a new constant double variable. I tried everything but I had to re-state each equation into its own variable on a new line. Although
	a bit more sloppy, this method still provided the correct pricing for any amount. Also the variables in this block were stated as "tax" 
	for "Tax Cost", "TOTALb" as "Total before tax", and "TOTALa" as "Total after tax". */ 
	

	cout << "\nThanks for using the ticket system!" << endl;

	/*Whew. Even though it might be a little different than what you were expecting, the system works (as long as the user enters postive integers
	or 0) and calculates the correct amount of money for each ticket. This first assignment was a little tough but I feel more comfortable in my
	use of c++ and pico. That is all from me, thanks for reading! */


	return 0;
}

