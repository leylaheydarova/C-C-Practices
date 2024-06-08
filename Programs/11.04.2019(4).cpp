#include <iostream>
using namespace std;
class Demo{
	int n;
	public:
		Demo(int m){
			n = m;
			cout << "Constructor: "<< this << endl;
		}
		void setn(int m){
			n = m;
		}
		void getn(){
			cout << "n = " << n << endl;
			cout << "Object: " << this << endl;
		}
		~Demo(){
			cout << "DEstructor: " << this << endl;
		}
};

int main(){
	// creating of object //
	Demo a(1);
	//Creating an object with explicir constructor call://
	Demo b = Demo(2);
	//Value check//
	a.getn();
	b.getn();
	//Changing a field value using a class method://
	a.setn(-1);
	//Value check://
	a.getn();
	//Copying objects://
	a = b;
	//Verify copy result://
	a.getn();
	//Changing the field value using the constructor//
	a = Demo(0);
	//Check result://
	a.getn();
	return 0;
}
