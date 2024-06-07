#include <stdio.h>
int main () {
	int *q, n, *p;
	n = 100;
	p = &n;
	q = p;
	(*p)++;
	
	printf ("%d\n", *q); // value of p = > n = 100+1 //
	printf ("%d\n", n ); // value if n itself = > 100 + 1 //
	printf ("%d", p ); // address of p //
	
	return 0;
}
