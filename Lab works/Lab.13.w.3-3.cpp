/* Write a program to extract a substring from a given string */
#include <stdio.h>
#include <string.h>
int main () {
	char Kovser[100], Rena[100];
	printf ("Enter the Kovser string:\n");
	gets(Kovser);
	
	strncpy(Rena, Kovser+23, 55);
	
	puts(Rena);
	return 0;
}
