#include <stdio.h>
int main ()
{
	// an array //
	int a[10];
	
	// index
	int i;
	
	// I use loop, because I input an array //  
	for ( i = 0; i < 10; i++ ){
		scanf("%d", &a[i]);
	}
	
	// maximal and minimal numbers //
	int max_num, min_num, imin, imax;
		min_num = a[0];
		imin = 0;
		max_num = a[0];
		imax = 0;
		
	// to find min number //
	for ( i = 1; i < 10; i++){
		if ( a[i] < min_num ){
			min_num = a[i];
			imin = i;
		}
		if ( a[i] > max_num ){
			max_num = a[i];
			imax = i;
		}
	}
	
	//swap their places//
	 int c;
	 
	c = a[imin];
	a[imin] = a[imax];
	a[imax] = c;
	
	printf ("max=%d\ti_max=%d\nmin=%d\ti_min=%d", mim_num, max_num); 
	// we 
	
	return 0; 
	
	}
