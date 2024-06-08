#include <iostream>
using namespace std;
// Class with privated field //
class MyClass  {
	double x; 
	public:
		MyClass(double z) {
			x = z;
		}
		//friend function //
	friend void show (MyClass obj);
};

// description of friend function //
void show ( MyClass obj) {
	cout << "x = " << obj.x << endl;
}

int main(){
	MyClass a(10);
	show(a);
	return 0;
}
