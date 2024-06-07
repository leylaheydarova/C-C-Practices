/* Write a program as spiral form */

#include <stdio.h>
int main () {
	int rows, columns;
	printf ("Please, type the size of an array:\n");
	scanf ("%d%d", &rows, &columns);
	
	int a[rows][columns];
	printf("Please tye the elements of 2D array:\n");
	int i, j;
	for ( i = 0; i < rows; i++ ){
		for ( j = 0; j < columns; j++)
			scanf("%d", &a[i][j]);
	}	
	
	//going throw 1st row //
	for ( i = 0; i <rows; i++ ){
		for ( j = 0; j < columns; j++ ){
			printf ("%d, ", a[i][j] );
		} break;
	} 
	
	//down up throw last column //
	for ( i = 0; i < rows; i++ ){
		for ( j = columns-1; j > 0; j-- ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	
	//return throw last row //
	for ( i = rows-1; i > 0; i-- ){
		for ( j = columns - 1; j > 0; j-- ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	
	//up throw 1st column //
	for ( j = columns - 1; j > 0; j-- ){
		for ( i = rows - 1; i > 0; i-- ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	
	//go right throw 2nd row //
	for ( i = 1; i < rows; i++ ){
		for ( j = 1; j < columns-1; j++ ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	
	//down throw 4th column //
	for ( j = 3; j > 0; j--){
		for ( i = 2; i < 3; i++ ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	
	//go left throw 3rd row //
	for ( i = 2; i > 0; i-- ){
		for ( j = 3; j >= 1; j-- ){
			printf ("%d,  ", a[i][j]);
		} break;
	}
	return 0;
}
