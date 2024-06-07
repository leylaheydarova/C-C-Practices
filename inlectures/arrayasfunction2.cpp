// Size not specified //

#include <stdio.h>
 int array (int b[]) {
 	for ( int i = 0; i < 6; i++ ) {
 		printf ("%d  ", b[i]);
	 }
 }
 
 int main () {
 	int n[6] = { 2, 5, 7, 8, 12, 15 };
 	array(n);
 	
 	return 0;
 }
