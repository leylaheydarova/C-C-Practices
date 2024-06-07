#include <stdio.h>
int main () {
	
	int array_a[10], array_b[10]; 
	int i,j, counts = -1; 
	
	
	for ( i = 0; i < 10; i++ ) {
		scanf (" %d ", &array_a[i]);
	}
	
	for ( i = 0; i < 10; i++ ) {
			if ( array_a[i] % 2 != 0 ) {
		
		counts++;
		array_b[counts] = array_a[i];
		
	}
	else {
		printf ("\t");
	}
	}

for ( j = 0; j < counts; j++) {
		printf ("%d\t", array_b[j]);
}
	return 0;
}
