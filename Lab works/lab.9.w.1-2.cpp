/* Sequential searching algorithm */

#include <stdio.h>
int main () {
	int size;
	printf ("\nPlease type the size of list(array)\n");
	scanf ("%d", &size); // because the size of list can be more //
	
	int list[size], i;
	int t_val; // target value //
	
	printf ("\nPlease type the target value:\n");
	scanf ("%d", &t_val);
	
	printf ("\nPlease type elements of list(array):\n");
	for ( i = 0; i < size; i++ ){
		scanf("%d", &list[i]);
	}	
	
	int it_val; // index of target value //
	for ( i = 0; i < size; i++ ) {
		if (t_val == list[i])
			it_val = i;}
	printf("target value is located in %dth element", it_val +1 );
	return 0;
}
