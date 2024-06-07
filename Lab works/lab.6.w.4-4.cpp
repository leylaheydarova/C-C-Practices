/* Write a program to find two minimal elements in an array */

#include <stdio.h>
int main() {
	printf ("to find two minimal elements in an array\n\n");
	int kvo, i, n, nmin1, nmin2;
	int size;
	printf ("Please type the size of an array:\n");
	scanf ("%d", &size);
	
	int x[size];
	printf ("Please type the elements of an array:\n ");
	for ( i = 0; i < size; i++ )
		scanf ("%lf", &x[i]);
	for ( nmin1 = 0, i = 1; i < size; i++){
		if ( x[i] < x[nmin1] ) nmin1 = i;
	}	
	
	for ( kvo = i, i = 0; i < size; i++ ){
		if ( i != nmin1 ){ 
			kvo++;
			if ( kvo == 1 ) nmin2 = 2;
			else if ( x[i] < x[nmin2]) nmin2 = 2;
		}
	}
	printf ( "%lf\t%lf", x[nmin1], x[nmin2]);
	
	return 0;
}
