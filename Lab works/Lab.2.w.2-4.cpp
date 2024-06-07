/* It's necessary to check whether the given number is a pelindrome (f.e 404, 1221 and etc.) */

#include <stdio.h>
int main () {
	 
	int a, b, c;
	
	printf ( "Please type any positive integer number:\n" );
	scanf ("%d", &a);
	
	c = a;
	
	while ( a != 0 ) {
		b = b * 10 + a % 10;
		a = a / 10;
	}
	if ( c == b ) {
		printf ( "%d\nThis number is pelindrome", b );
	}
	else {
		printf ( "%d\nThe number isn't pelindrome", b );
	}
	
	return 0;
}
