#include <iostream>
using namespace std;
// Base class //
class Shape {
	protected:
		int width;
		int height;
	public:
	void setwidth ( int w ){
		width = w;
	}		
	void setheight ( int h ){
		height = h;
	}
};
// derived class //
class Rectangle: public Shape{
	public:
		int getArea(){
			return (width * height );
		}
};

int main () {
	Rectangle Rect;
	Rect.setwidth(5);
	Rect.setheight(7);
	// Print area of the object //
	cout << "Total area of the object = " << Rect.getArea();
	return 0;
}
