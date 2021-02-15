//*****************************************************************
// Modified by Steven Smail for COP3514
//
// cents.c (Project 4)
//
// This program asks the user to enter a number of cents and then
// calculates the number of quarters, dimes, nickels, and pennies
// needed to add up to that amount.
//*****************************************************************

#include <stdio.h>
#define QUARTER 25
#define DIME 10
#define NICKEL 5
#define PENNY 1

void coins(int cents, int *quarters, int *dimes, int *nickels, int *pennies);

int main()
{
	//Initialize variables and read input
	int cent;
	int quarter, dime, nickel, penny;
	printf("Enter the number of cents:\n");
	scanf("%d", &cent);

	//Check the range of the input amount
	if(cent < 0 || cent > 10000)
	   printf("Invalid amount %d,\nAmount must be between 0 and 10000, inclusive\n", cent);
	else {
		coins(cent, &quarter, &dime, &nickel, &penny);

		printf("Quarters: %d\n", quarter);
		printf("Dimes: %d\n", dime);
		printf("Nickels: %d\n", nickel);
		printf("Pennies: %d\n", penny);
	}
	return 0;
}

//Determines the number of quarters, dimes, nickels, and pennies necessary
void coins(int cents, int *quarters, int *dimes, int *nickels, int *pennies)
{
	*quarters = cents/QUARTER;
	*dimes = cents%QUARTER/DIME;
	*nickels = cents%QUARTER%DIME/NICKEL;
	*pennies = cents%QUARTER%DIME%NICKEL;
}