#include <stdio.h>
class Triangle{
	public:
		int x, y, z;
		Triangle ( int a, int b, int c ){
			x = a;
			y = b;
			z = c;
		}
};

int main () {
	Triangle a(1, 2, 3);
	printf ("%d %d %d \n", a.x, a.y, a.z);
	return 0;
}
