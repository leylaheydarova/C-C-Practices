#include <stdio.h>
namespace first {
	int var = 5;
}
namespace second{
	double var = 3.1416;
}
int main () {
	printf ("%d\n", first :: var );
	printf ("%lf\n", second :: var );
	return 0;
}
