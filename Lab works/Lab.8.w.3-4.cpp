/* Write the elements in increasing order as using Quick sort algorithm of the given array */

#include <stdio.h>
void quick_Sort ( int arr[10], int a, int b );
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
		printf ("%d  ", array_q[i]);
	}
	return 0;
}
void quick_Sort ( int arr[10], int left, int right ){
	int i = left, j = right;
	int temp;
	int pivot = arr[(left+right)/2];
	while ( i <= j ) {
		while ( arr[i] < pivot )
		i++;
		while ( arr[j] > pivot )
		j--;
		
		if ( i <= j ){
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			i++;
			j--;
			} 
		}
	// recursion //
	if ( left < j )
	quick_Sort ( arr, left, j );
	if ( i < right )
	quick_Sort ( arr, i, right );
}
