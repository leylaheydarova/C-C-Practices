#include <stdio.h>
#include <math.h>
int main () {
	int array[10]; 
	int max_a , min_a; // max and min elements of array //
	int imin, imax; // indices of max and min elements //
	int i,j, c[10], counts = 0, geo_mean; // aux value //
	
	// Step 1: to find the max and min elements and theirs index of an array //

	printf ("\nPlease type the elements of an array:\n");	
	for ( i = 0; i < 10; i++ ) {
		scanf ( "%d", &array[i] );
	}
	
	max_a = array[0];	imax = 0;
	min_a = array[0];	imin = 0;
	
	for ( i = 1; i < 10; i++ ){
		if ( array[i] > max_a ) {
			max_a = array[i];   imax = i;
		}
		
		if ( array[i] < min_a ) {
			min_a = array[i];   imin = i;
		}
	}
	// Step 2: check whether max and min elements how located in array //
	int q; // auxilary index //
		if ( imin > imax ) {
			q = imax;
			imax = imin;
			imin = q;
		}
	
	// Step 3: find the elements located between imin and imax, then find the products of prime ones //
	long int p = 1;
	for ( i = imin; i < imax; i++ ) {
		int isPrime = 1; 
		for ( j = 2; j < sqrt (array[i]); j++) {
			if ( array[i] % j == 0){
				isPrime = 0; 
				break;
			}
		}
		
		if ( isPrime == 1) {
			counts++;
			p *= array[i];
		}
	}
	
	// Step 4: to find geometric mean of these prime numbers //
	geo_mean = pow ( p, 1/counts );
	
	// Step 5: to get final result //
	
	printf ("%d\n%d\n%d\n", max_a, min_a, geo_mean );
	return 0;
	
}
