/* Write a program to convert a decimal number to hexadecimal number */

#include <stdio.h>
int main () {
	int number;
	printf ("Please type the decimal number:\n");
	scanf ("%d", &number);
	printf ("The hexadecimal form is: %X", number);
	return 0;
}
