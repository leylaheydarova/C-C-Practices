/* Write a program to convert from decimal to binary */

#include <stdio.h>
int main () {
	printf ("to convert from decimal to binary\n\n");
	
	int num;
	printf ("Please type the decimal number:\n");
	scanf ("%d", &num);
	
	int remainder;
	while ( num != 0 ){
		remainder = num % 2;
		int temp = remainder;
	}
	
	int i, reverse = 0;
	while ( remainder > -1 ){
		i = remainder % 10;
		reverse = reverse * 10 + i;
		remainder /= 10;
	}
	
	printf ("%d", reverse);
	return 0;
}
