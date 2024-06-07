/* Program for calculation the sum of natural even numbers nor esceeding given m */

#include <stdio.h>
int main () {
	
	int m, counts = 0, sum = 0;
	
	printf ("Please enter the integer numbers\n");
	while ( m > -1) {
		scanf ("%d", &m);
	
	if ( m % 2 == 0 ) {
		counts++;
		sum += m;
	}
}
	printf ("Sum is %d\nCounts: %d\n", sum, counts);
	return 0;
}
