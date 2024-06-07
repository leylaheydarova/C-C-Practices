/* Write the elements in increasing order as using Selection sort algorithm of the given array */

#include <stdio.h>
int main () {
	
	const int N = 5;
	int array_s[N];
	int i;
	int max, imax = 0;
	max = array_s[0];
	
	for ( i = 0; i < N; i++ ) {
		scanf ("%d", &array_s[i]);
	}
	
	int a;
	for ( i = 0; i < 5; i++ ) {
		if ( array_s[i] > max ) {
			imax = i;
		}
		a = imax;
		imax = array_s[N];
		array_s[N] = a;
	}
}

