/* Write the function to determine the given number is an armstrong or not ( 153 = 1*1*1 + 5*5*5 + 3*3*3 ) */

#include <stdio.h>
#include <math.h>

int main () {
	
	int num, i, temp;
	int sum = 0, counts = 0;
	
	printf("\nPlease enter the positive number:\n\n");
	scanf("%d", &num);
	
	// Step 1: To find how many digits the number contains //
	temp = num;
	do {
		temp /= 10;
		counts++;
	} while ( temp > 0);
	printf ("counts: %d\n", counts);
	// Step 2: To determine the digits and calculate as main rule //
	temp = num;
	do {
		i = num % 10;
		num /= 10;
		sum += pow (i, counts);
	}
	while ( num > 0 );
	printf ("sum:%d\n", sum);
	// Step 3: To determine this number is an armstrong or not //
	if ( sum == temp )
		printf ("%d\tThis number is an armstrong\n", sum);
	
	else
		printf ("%d\tThis number isn't an armstrong\n", sum);

	return 0;
}
