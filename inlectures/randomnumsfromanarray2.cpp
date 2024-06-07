#include <stdio.h>
int main (){
	int size;
	printf ("Please type the size of an array:\n");
	scanf ("%d", &size);
	int n[size];
	int i, j;
	printf ("Please type the elements:\n");
	for ( i = 0; i < size; i++ ){
			scanf ("%d", &n[i]);
	}
	printf ("\n");
	int m[size], a;
	for ( a = 0,i = size-1; a <size,i >= 0; a++,i--  ){
			m[a] = n[i];
	}
	int c;
	for ( a = 1; a < size - 2; a++ ){
		c = m[a+2];
		m[a+2] = m[a];
		m[a] = m[a+1];
		m[a+1] = c;
	}
	for ( a = 0; a < size; a++ ) 	printf ("%d\n", m[a]);
	return 0;
}
