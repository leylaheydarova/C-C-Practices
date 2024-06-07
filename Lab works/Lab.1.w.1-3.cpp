/* Program for finding the greatest common divisor (GCD) */

#include <stdio.h>
int main () {
	int a, b, c;
	
	printf ( "Please, enter two nonnegative integers:\n " );
	scanf ( "%d%d", &a, &b );
	
	while ( b != 0 ) {
		c = a % b;
		a = b;
		b = c;
	}
	
	printf ("GCD is %d", a);
	return 0;
}
