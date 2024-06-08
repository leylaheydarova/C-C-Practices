#include <stdio.h>
class Point {
	int x, y;
	public:
		void setX (int value){
			x = value;
		}
		
		void setY(int value){
			y = value;
		}
		
		int GetX(){
			return x;
		}
		
		int GetY(){
			return y;
		}
};

int main (){
	Point a;
	a.setX(5);
	a.setY(8);
	printf("%d  %d\n", a.GetX(), a.GetY());
	return 0;
}
