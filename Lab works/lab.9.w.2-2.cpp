/* Binary search algorithm */

#include <stdio.h>
int main () {
	
	int m; // searching value //
	printf ("The codes of letters are:\n");
	printf ("A=01; a=001;  B=02; b=002;  C=03; c=003;  D=04; d=004;  E=05; e=005\n;F=06; f=006;  G=07; g==007;  H=08; h==008  ");
	printf ("I=09; i=009;  J==10\n; j==010;  K=11; k=011;  L=12; l=012;  M=13; m=013;  N=14; n=014;  O=15; o=015;\nP=16; p=016  ");
	printf ("Q=17; q=017;  R=18; r=018;  S=19; s=019;  T=20; t=020;\nU=21; u=021;  V=22; v=022;  W=23; w=023;  X=24; x=024;  Y=25; y=025;  Z=26; z=026\n");
	
	int size;
	printf ("Please, type the size of an array:\n");
	scanf ("%d", &size);
	
	int a[size];
	printf("Please tye the elements of an array:\n");
	int i, j;
	for ( i = 0; i < size; i++ ){
		scanf("%d", &a[i]);
	}	

	printf ("\nPlease type the searched element:\n");
	scanf ("%d", &m);
	
	int temp1;
	for ( i = 0, j = size-1; i <= (i+j)/2; i++ ) {
		if ( a[i] == m  ) {
			temp1 = i;
			break;
			}
		else { for ( i = (i+j)/2, j = size -1; i < j; i++){
			if ( a[i] == m ){
				temp1 = i;
				break;
				}
			}
		}
	}
	printf ("%d", temp1+1);return 0;
}
