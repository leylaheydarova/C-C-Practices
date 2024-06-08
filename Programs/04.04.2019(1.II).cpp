#include <iostream>
#include <stdio.h>
using namespace std;
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
	cout << a.x << "  "<< a.y << endl;
	return 0;
}
