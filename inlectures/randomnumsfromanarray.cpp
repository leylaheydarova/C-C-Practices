#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
	int size;
	printf ("Please type the size of an array:\n");
	scanf ("%d", &size);
	int n[size];
	int i, j;
	printf ("Please type the elements:\n");
	for ( i = 0; i < size; i++ ){
			scanf ("%d", &n[i]);
	}
	 
	rand() < n[size];
	rand() > n[0];
	printf ("%d\n", rand());
	return 0;
}
