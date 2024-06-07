/* Write the elements in increasing order as using Bubble sort algorithm of the given array */

#include <stdio.h>
int main () {
	int array_b[10];
	int i,j;
	int c;
	
	printf ("\nPlease type 10 elements of an array:\n");
	
	for ( i = 0; i < 10; i++ ) {
		scanf ( "%d", &array_b[i] );
	}	
	
	for ( i = 0; i < 9; i++ ) { // because, bubble sort algorithm begins with the last element of an array //
		for ( j = 8; j >= i; j-- ) {
			if ( array_b[j] > array_b[j+1] ) {
				c = array_b[j];
				array_b[j] = array_b [j+1];
				array_b [j+1] = c;
			}
		}
	}
	printf ("Sorted array:\n");
	for ( i = 0; i < 10; i++ ){
	printf ( "%d   ", array_b[i] );	
	}
	
}

