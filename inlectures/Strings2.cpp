/* Comparison String */
// Search how to output the code of symbol in ASCII //
#include <stdio.h>
#include <string.h>
int main () {
	char q1[3], q2[3];
	int n; 
	gets (q1);
	printf ("\n");
	gets (q2);
	printf ("\n");
	n = strcmp(q1,q2);
	printf ("%d", n);
	return 0;
}
