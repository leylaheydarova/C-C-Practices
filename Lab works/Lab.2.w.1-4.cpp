/* It's necessary to obtain a new number by writing down the digits of the given number in the reverse order */

#include <stdio.h>
int main () {
	int a, b;
	
	printf ( "\nPlease enter a positive number\n" );
	scanf ("%d", &a);
	a > 0;
	
	while ( a != 0 ) {
	    b = a % 10;
		printf ("%d", b);
		a = a / 10;
	}
	
	return 0;
	
}
