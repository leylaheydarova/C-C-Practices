#include <stdio.h>
class Triangle {
	public:
		int x, y, z;
		Triangle(int x, int y, int z) : x(x), y(y), z(z){}
};
int main(){
	Triangle a(1,4,5);
	printf("%d %d %d\n", a.x, a.y, a.z);
	return 0;
}
