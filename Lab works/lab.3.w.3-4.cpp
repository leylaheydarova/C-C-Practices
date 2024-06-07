/* It's necessary to determine whether the 2 numbers are simultaneously primitive numbers (qarwiliqli sade) */

#include <stdio.h>
int main () {
	printf("Primitive numbers:\n\n");
	int num1, num2; // numbers //
	int temp;
	
	printf ("Please type the numbers:\n");
	scanf("%d%d", &num1, &num2);
	
	// To find the Greatest Common Divisor(GCD) of the numbers //
	
	while ( num2 != 0 ){
		temp = num1 % num2;
		num1 = num2;
		num2 = temp;
	}
	
	if ( num1 == 1 ) printf ("These numbers are simultaneously primitive");
	else printf ( "These numbers are not simultaneously primitive" );
	return 0;
}
