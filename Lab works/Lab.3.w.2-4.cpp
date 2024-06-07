/* Write the program that determines friendly number(220 & 284; 5020 & 5564 => The sum of divisors) */

#include <stdio.h>
int main () {
	int num1, num2 = 0;
	int i = 2;
	
	printf ("Please type a positive integer number:\n");
	scanf ("%d", &num1);
	
	num1 > 0;
	do {
		
		if ( num1 % i == 0 )
		num2 += i;
		i++;
	}
	
	while ( i < num1 );
	
	printf("%d\t%d\nThese numbers are friendly numbers", num1, num2+1); // num2+1 - because during dividing num1 by i, there isn't considered 1 as divisor //
	
	return 0;
}
