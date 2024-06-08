#include <stdio.h>
class Point{
	public:
		int x, y;
		Point(int a, int b){
			x = a;
			y = b;
		}
};

int main(){
	Point a(5,8);
	Point b(2,3);
	printf("%d  %d  ", a.x, a.y);
	printf("%d  %d", b.x, b.y);
	return 0;
}
