/* Write the elements in increasing order as using Quick sort algorithm of the given array */

#include <stdio.h>
void quick_Sort ( int [10], int a, int b );
int main () {
	int size;
	printf("Please type the size of an array:\n");
	scanf ("%d", &size);
	
	int array_q[size];
	int i;
	printf ("Please type the elements:\n");
	for ( i = 0; i < size; i++ ){
		scanf ("%d", &array_q[i]);
	}
	
	quick_Sort( array_q, 0, size - 1 );
	printf ( "Sorted elemets:\n" );
	for ( i = 0; i < size; i++ ){
		printf ("%d", array_q[i]);
	}
	return 0;
}
