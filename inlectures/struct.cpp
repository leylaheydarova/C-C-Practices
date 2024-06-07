#include <stdio.h>
#include <string.h>
struct Marks {
	char name[100];
	int phy;
	int chem;
	int math;
}ivanov, petrov, sidirov;

struct Exams {
	double phy;
	double chem;
	double math;
};

int main () {
	strcpy ( ivanov.name, "Sergey Ivanov");
	ivanov.phy = 3;
	ivanov.chem = 4;
	ivanov.math = 4;
	
	strcpy ( petrov.name, "Iqor Petrov");
	petrov.phy = 5;
	petrov.chem = 4;
	petrov.math = 5;
	
	strcpy ( sidirov.name, "Vladimir Sidirov");
	sidirov.phy = 5;
	sidirov.chem = 5;
	sidirov.math = 5;
	
	Exams ThisYear;
	
	ThisYear.chem = ( double ) ( ivanov.chem + petrov.chem + sidirov.chem ) / 3;
	ThisYear.phy = ( double ) ( ivanov.phy + petrov.phy + sidirov.phy ) / 3;
	ThisYear.math = ( double ) ( ivanov.math + petrov.math + sidirov.math ) / 3;
	
	printf ("This Year marks are: \n ");
	printf ("Physics = %f\n", ThisYear.phy );
	printf ("Chemistry = %f\n", ThisYear.chem );
	printf ("Math = %f\n", ThisYear.math );

	return 0;
}
