#include <stdio.h>
#include <string.h>
int main () {
	char q1[10] = "qwerty", q2[10] = "01234";
	strcpy(q1,q2+2);
	puts(q1);
	return 0;
}
