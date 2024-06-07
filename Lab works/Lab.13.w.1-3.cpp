/* Write a program in C to find the length of a string without using library function */

#include <stdio.h>
#include <string.h>
int main () {
	char FL[30];
	
	printf ("Enter the FL string:\n");
	gets (FL);
	
	int counts = 1, i;
	while ( FL[i] != '\0' ){
		if ( FL[i] != '\0' )  counts++;
	i++;
	}
	printf ( "Length of string = %d", counts );
	
	return 0;
}
