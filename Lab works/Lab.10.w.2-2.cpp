/* Write a program to find transpose of a given matrix */

#include <stdio.h>
int main () {
	printf("Transpose of a matrix:\n");
	
	// declare the size of matrix and input elements: //
	printf("\nPlease type the sizes of the matrix:\n");
	int rows, columns;
	scanf ("%d%d", &rows, &columns);
	printf("\nPlease type the elements of matrix:\n");
	int a[rows][columns];
	for ( int i = 0; i < rows; i++ ){
		for ( int j = 0; j < columns; j++ ){
			scanf ("%d", &a[i][j]);
		}
	}
	
	// to find the transpose of that matrix //
	
	int c;
	for ( int i = 0; i < columns; i++ ){
		for ( int j = 0; j < rows; j++ ){
			if ( i == j ){
				break;
			}else{
			c = a[i][j];
			a[i][j] = a[j][i];
			a[j][i] = c;}
		}
	}
	
	// to change the sizes of resulting matrix //
	c = columns;
	columns = rows;
	rows = c;

	for ( int i = 0; i < rows; i++ ){
		for ( int j = 0; j < columns; j++ ){
			printf ("%d", a[i][j]);
		}printf ("\n");
	}
	 return 0;
}
