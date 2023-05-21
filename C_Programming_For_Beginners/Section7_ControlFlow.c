/*
*		Written By: Aaron Hale
*		05/21/23
*		
*		Simple program to calculate the amount of taxes paid based on number of hours worked
*/



#include <stdio.h>

int main() {

	int hrsWork,netPay,tax;

	printf("Enter Number of hours worked:");
	if (scanf( "%d", &hrsWork) > 0);

	int grossPay = hrsWork * 12;

	if (grossPay <= 300) {
		tax = grossPay * .15;
	}
	else if (grossPay <= 450) {
		tax = (300 * .15) + (grossPay - 300) * .2;
	}
	else{
		tax = (300 * .15) + (150 * .2) + grossPay * .25;
	}

	netPay = grossPay - tax;

	rintf("gross pay is %d\n", grossPay);
	printf("Net Pay: %d\n", netPay);
	printf("Taxes: %d\n", tax);

}