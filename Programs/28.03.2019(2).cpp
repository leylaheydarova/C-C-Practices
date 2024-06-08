#include <iostream>
using namespace std;
class MyClass{
	public:
		double x;
		void show(){
			cout << "x = " << x << endl;
		}
		MyClass(double z){
			x = z;
			cout << "Object with x = " << x << " has been created!\n";
		}
		MyClass(){
			x = 0;
			cout << "Object with x = " << x << " has been created!\n";}
		~MyClass(){
			cout << "Object with x = " << x << " has been deleted!\n";
		}
		};
		
		int main () {
			MyClass *p, *m;
			p = new MyClass;
			p -> show();
			delete p;
			m = new MyClass(1);
			m -> show();
			delete m;
			return 0;
		}
