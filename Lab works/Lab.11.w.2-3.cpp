/* Write a program to print upper triangular matrix */

#include <stdio.h>
int main () {
	printf ("The upper triangular form:\n\n");
	
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
		printf ("\nPlease type the elements:\n");
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				scanf ("%d", &mat[i][j]);
			}
		}
	
		int n = 1;
			for ( i = 1; i <= rows; i++ ){
				for ( j = 1; j <= columns; j++ ){
					if ( i > j && mat[i][j] != 0 ) {
					n = 0;
					break;
				} 
			}
		}
		
		if ( n == 0 ) printf ("Error...");
		else if ( n == 1 ){
			printf ("Is Upper:\n");
			printf ("\n");
			printf("------------------------\n");
			for ( i = 1; i <= rows; i++ ){
				for ( j = 1; j <= columns; j++ ){
					printf ("%d\t", mat[i][j]);
				} printf ("\n");
			}
		}
	}
	
	else printf("The upper form can occur in square matrix...");
	return 0;
}
