/* Write the program in C to check whether a given matrix is magic square. 
That means, the sum of element consisting in all rows, all columns and all diagonals are equal to one another  */

#include <stdio.h>
int main () {
	printf ("to check whether a given matrix is magic square.\n\n");
	
	int rows, columns;
	printf ("Please type the size of matrix:\n");
	printf("Type rows:");
	scanf ("%d", &rows);
	printf ("Type columns:");
	scanf("%d", &columns);
	printf ("\n");
	
	if ( rows == columns ){
		int mat[rows][columns];
		int i, j;
		printf ("Type the elements:\n");
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				scanf ("%d", &mat[i][j]);
			}
		}
		
		int sum_r;
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				sum_r += mat[i][j];
			}break;
		}
		
		int sum_c;
		for ( j = 1; j <= columns; j++ ){
			sum_c=0;
			for ( i = 1; i <= rows; i++ ){
				sum_c += mat[i][j];
			}break;
		}
		
		int sum_d;
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				if ( i == j )
				sum_d += mat[i][j];
			}
		}
		
		if ( ( sum_r == sum_c ) && ( sum_c == sum_d ) ) printf ("\nThis matrix is magic square\n");
		else printf("The matrix is not square...");
	}
	else printf("The magic sqruare matrix can only be square...\n");
	
}
