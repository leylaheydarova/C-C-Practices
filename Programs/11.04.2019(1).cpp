#include <iostream>
using namespace std;
class MyClass{
	public:
		int m, n;
	// constructor: //
	MyClass(){
		m = 0;
		n = 0;
	cout << "Object has been created\n";}
	//destructor//
	~MyClass(){
		cout << "Object has been deleted\n";
	}
};

int main(){
	MyClass obj;
	return 0;
}
