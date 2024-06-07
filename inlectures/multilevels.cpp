//Multiaddressing

#include <stdio.h>
int main (){
	
	int n, *p, **q;
	p = &n;
	q = &p;
	n = 100;
	(*p) += 5;
	(**q)--;
	
	printf ( "%d\n", &n ); // address of n //
	printf ( "%d\n", &*p ); // address of value of p => n ( 100 + 5 - 1 = 104 ) //
	printf ( "%d\n", **q ); // value of *p => value of n //
	printf ( "%d\n", p ); // address of n //
	printf ( "%d", q); // address of p //
	
	return 0;
}
