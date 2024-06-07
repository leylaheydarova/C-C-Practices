/* Given a natural number m. It's necessary to determine the number of dividers of this number, less than itself */

#include <stdio.h>
int main () {
	
	int m, n, counts = 0;
	
	printf ( "\nPlease, type the integer number\n" );
	scanf ( "%d", &m );
	
	while ( m > counts ) {
		n = m % 10;
		m = m / 10;
		counts++;
	}
	
	printf ( "The number of divisors is %d", counts+1 );
	return 0;

}
