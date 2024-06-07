/* N sets of nonzero integers are given. Each set contains at least 2 elements. A sign of completion of the set is the number of zero. 
Find the number of sets whose elements increase */

#include <stdio.h>
int main () {
	 
	int n; // numbers
	int m, k; // auxilary variables
	int counts = 0;
	
	while ( n != 0 ) {
		scanf ( "%d", &n );
	}
	 do {
	 	m = n;
	 	scanf ( "%d", &n );
	 	k = n;
	 	
	 	if ( k > m ) {
	 		counts++;
		 }
	 }
	  while ( n != 0 );
	 printf ( "%d", counts-1 );
	 
	 return 0;
}
