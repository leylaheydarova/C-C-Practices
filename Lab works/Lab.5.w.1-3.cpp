#include <stdio.h>
long int Factorial( int a ){
	do {
		if ( a >= 0 ){
			return Factorial (a);
		}
		else return 0;
	} while ( a <= 0);
}
	
	int main ()
{
		int num;
		scanf ( "%d" , &num);
		if ( num > 0) {
			num = Factorial(num);
			printf ("Factorial is %d", num);
		}
		else
		printf ("The problem refers factorial of positive numbers\n");
		return 0;
}

