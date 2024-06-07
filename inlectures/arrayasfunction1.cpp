//Explicit size //

#include <stdio.h>
void array( int n[5] ){
	for ( int i = 0; i < 5; i++ )
	printf ("%d  ", n[i]);
}

int main (){
	int n[5] = { 9, 10, 14, 15, 16};
	array(n);
	
	return 0;
}
