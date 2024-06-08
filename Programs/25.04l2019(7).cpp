#include <iostream>
using namespace std;
//generalized class//
template <class X> class MyClass{
	X value;
	public:
		MyClass ( X m ){
			value = m;
		}
		void set ( X m) {
			value = m;
		}
		void get() {
			cout << "value = " << value << endl;
		}
};
int main(){
	//Creation object with int field//
	MyClass < int > a(5);
	a.get();
	a.set(3);
	a.get();
	//Creation object with char field//
	MyClass <char> b ('x');
	b.get();
	b.set('z');
	b.get();
	return 0;
}
