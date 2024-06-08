#include <stdio.h>
class Point{
	int x, y;
	public:
		void setX(int value);
		void setY(int value);
		int getX ();
		int getY();
};

void Point :: setX(int value){
	x = value;
}

void Point :: setY (int value){
	y = value;
}

int Point :: getX(){
	return x;
}

int Point :: getY(){
	return y;
}

int main(){
	Point a;
	a.setX(5);
	a.setY(8);
	printf("%d  %d\n", a.getX(), a.getY());
	return 0;
}
