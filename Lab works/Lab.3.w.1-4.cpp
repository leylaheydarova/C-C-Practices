/* It's necessary to determine whether a positive number is perfect (6, 28, 496, 8128) (This means that the sum of divisors equals to number itself*/

#include <stdio.h>
#include <math.h>
int main () {
	int number, sum=1;
	int i; 
	
	printf ( "Please, type a positive number:\n" );
	scanf ( "%d", &number );
	
// Step 1: to find the divisors of the number //	
	for ( i = 2; i < sqrt (number); i++) { // starts from 2, because of dividing by 0 imposibble, and ti divide 1 gets the same result //
		if ( number % i == 0 ) {
			sum += i + number/i; // for decrasing the number of loop steps //
		}
	}
	
// Step 2: to check if it is perfect number //
	if ( sum  == number ) 
	{ 
		printf ( "%d\tThis number is a perfect number", sum ); }
	
	else {
		printf ( "%d\tThis number isn't perfect number" );
	}
	
	return 0;
}
