#include <stdio.h>
int Digits (int a ) {
	int b, c = 5;
	while ( a=!0) {
	a = b % 10;
	b = b / 10;
	if ( a == 0 )
	return c;
	else
	return 0;
 }
	
}
int main () {
	int num, counts = 0;
	while ( num != -1) {
		scanf ("%d", &num);
		if ( Digits ( num ) )
        counts++;
	}
	printf ("%d", counts);
}
