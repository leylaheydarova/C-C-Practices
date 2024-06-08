#include <iostream>
class Point{
	public:
		int x, y;
		point(){
			x = 0; // you can assign any value here
			y = 0; // you can assign any value here
		}
};

int main (){
	Point a;
	printf("%d  %d", a.x, a.y );	 
	return 0;
}
