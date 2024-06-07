#include <stdio.h>
int main ()
{
	int a[15];
	int max, nmax;
	int i;
    
    for ( i = 0; i < 15; i++ )
	scanf ( "%d", &a[i] );
	
	max = a[0];
	nmax = 0;
	
	for ( i = 0; i < 15; i++ )
	if ( a[i] > max ) {
		max = a[i];
		nmax = i;
	}
	
	printf (" The max element of this array is %d\n And its position is %d", max, nmax );
	
	return 0;
	
}
