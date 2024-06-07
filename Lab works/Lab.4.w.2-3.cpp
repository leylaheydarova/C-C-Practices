/* Write a program in C to input any number and print it in words */

#include <stdio.h>
int main () {
	int num, reverse = 0, remainder;
	printf ("Please type the number:\n");
	scanf ("%d", &num);
	
	while ( num > 0 ) {
		remainder = num % 10;
		reverse = reverse * 10 + remainder;
		num /= 10;
	}
	
	num = reverse;
	while ( num != 0 ){
		remainder = num % 10;
		num /= 10;
		
		switch ( remainder ){
			case 0: printf ("Zero\t"); break;
			case 1: printf ("One\t"); break;
			case 2: printf ("Two\t"); break;
			case 3: printf ("Three\t"); break;
			case 4: printf ("Four\t"); break;
			case 5: printf ("Five\t"); break;
			case 6: printf ("Six\t"); break;
			case 7: printf ("Seven\t"); break;
			case 8: printf ("Eight\t"); break;
			case 9: printf ("Nine\t"); break;
			default: printf (" ");
		}
	} return 0;
}
