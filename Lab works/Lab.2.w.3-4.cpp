/* It's necessary to determine how many time the sequence of N arbitrary number changes sign */

#include <stdio.h>
int main () {
	int n; // number //
	int m; // auxilary variables //
	int counts = 0;
	
	printf ( "\nPlease type some integers:\n" );
	scanf ("%d", &n);
	
	while ( n != 0) {
		m = n;
	
		scanf ("%d", &n);

		if (m * n < 0) {
			counts++;
		}
	}
	
	printf ("%d times", counts);
	return 0;
}
