// Arrays as pointer //

#include <stdio.h>
void array( int *a, int b ) {
	for ( int i = 0; i < b; i++ )
	printf ("%d  ", a[i]);
}

int main (){
	int n[9] = { 1, 2, 3, 4, 5, 7, 8, 10, 11 };
	
	array ( n, 9 );
	array ( n, 5 );
	
	return 0;
}
