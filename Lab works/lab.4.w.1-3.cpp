/* Write a program to display Pascal's triangle like right triangle */

#include <stdio.h>
long factorial(int);
int main () {
	printf ("to display Pascal's triangle like right triangle\n");
	int i, n, j;
	printf ("Please type the number rows:\n");
	scanf("%d", &n);
	
	for ( i = 0; i < n; i++ ){
		for ( j = 0; j <= ( n - i - 2); j++ )
			printf (" ");
		
		for ( j = 0; j <= i; j++ )
			printf ("%ld ", factorial( i ) / (factorial( j )*factorial( i - j )));
			printf ("\n");
	}
	return 0;
}
long factorial ( int n ){
	int j;
	long result = 1;
	for ( j = 1; j <= n; j++ )
	result *= j;
	return ( result );
}
