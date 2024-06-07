/* Write a program in C to check whether is identity matrix */

#include <stdio.h>
int main () {
	printf ("to check whether is identity matrix:\n\n");
	
	int rows, columns;
	printf ("Please type the size of matrix:\n");
	printf("Type rows:");
	scanf ("%d", &rows);
	printf ("Type columns:");
	scanf("%d", &columns);
	printf ("\n");
	
	if ( rows == columns ){
		printf ("Type the elements:\n");
		int mat[rows][columns];
		int i, j;
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				scanf("%d", &mat[i][j]);
			}
		}
		printf ("-------------------------");
		int n = 0; // flag //
		for ( i = 1; i <= rows; i++ ){
			for ( j = 1; j <= columns; j++ ){
				
				if ( ( i == j && mat[i][j] != 1 ) || ( i != j && mat[i][j] != 0 ) ){
					printf ("\nThe matrix is not identity.\n");
					n = 1;
					break;} } }
				
		if ( n == 0 ) printf ("\nThe matrix is identity");
	}
	
	else printf ("\nThe identity matrix can only be square...");
	
	return 0;
}
