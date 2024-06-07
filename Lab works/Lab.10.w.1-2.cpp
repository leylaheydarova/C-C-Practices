/* Write a program multiplication of two square matrices: */

#include <stdio.h>
int main (){
	printf ("Multiplication of two matrices:");
	int temp1, temp2, temp3, temp4;
	int rows, columns, i, j;
	// Step 1: declare the sizes of first matrix and input it //
	printf ("\nPlease type the number of rows and columns of 1st matrix:\n");
	scanf ("%d%d", &rows, &columns);
	temp1 = rows;
	temp2 = columns;
	int a[rows][columns];
	printf ("\nPlease type the elements of 1st two dimensional matrix:\n");
	for ( i = 0; i < rows; i++ ){
		for ( j = 0; j < columns; j++ ){
			scanf ("%d", &a[i][j]);
		}
	}
	
	// Step 2: declare the sizes of second matrix //
	printf ("\nPlease type the number of rows and columns of 2nd matrix:\n");
	scanf ("%d%d", &rows, &columns);
	temp3 = rows;
	temp4 = columns;
	
	// Step 3: to check the main condition of multiplication of matrices //
	 if (temp2 == temp3){
	 
	 	//Input the 2nd matrix //
	 	int b[rows][columns];
		printf ("\nPlease type the elements of 2nd two dimensional matrix:\n");
		for ( i = 0; i < rows; i++ ){
			for ( j = 0; j < columns; j++ ){
				scanf ("%d", &b[i][j]);
			}
		}
		//take another matrix to represent the result //
		int c[temp1][temp4], sum = 0;
		for ( i = 0; i < temp1; i++ ) {
			for ( j = 0; j < temp4; j++ ){
				for ( int k = 0; k < temp2; k++){ // k < temp2 || k < temp3 not difference, because temp2 = temp3; //
				// we take auxilary k variable to represent the location of element in resulting matirx //
				sum += a[i][k] * b[k][j];
				}
				c[i][j] = sum;
				sum = 0;
			}
		}
		
	// Step 4: Output of our result //
		for ( i = 0; i <temp1; i++ ) {
	 		for ( j = 0; j < temp4; j++ ) {
	 			printf ("%4d", c[i][j]);
		 	} printf ("\n");
	 	}
	 }
	 
	 else {
	 	printf ("In this case, matrices can't be multiplied.\n");
	 }
	 
	 
	 	return 0;
}
