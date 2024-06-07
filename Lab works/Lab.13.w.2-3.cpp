/* Write a program to count the total number of words in string */
#include <stdio.h>
#include <string.h>
int main () {
	char BLH[100];
	printf ("Enter the BLH string:\n");
	gets(BLH);
	
	int counts = 1, i;
	
	while ( BLH[i] != '\0'){
		if ( BLH[i] == ' ' || BLH[i] == '\n' || BLH[i] == '\t') {
		counts++;
		 } i++;
	}
	
	printf ("%d", counts);
	return 0;
}
