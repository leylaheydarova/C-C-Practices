#include <iostream>
using namespace std;
//base class//
class A{
	protected:
		int x;
	public:
		virtual void set ( int i ){
			x = i;
		}
		virtual void get() {
			cout <<"x = " << x << endl;
		}
};
//derivative class//
class B: public A{
	private:
		int y;
	public:
		//overriding of method//
		void set ( int i){
			x = i;
			y = i;
		}
		//overloading of method//
		void set ( int i, int j ){
			x = i;
			y = j;
		}
		//overriding of method//
		void get(){
			cout << "x = " << x << endl;
			cout << "y = " << y << endl;
		}
};
int main () {
	A a;
	B b;
	int c;
	cout << "Enter c:  ";
	cin >> c;
	a.set(c);
	a.get();
	int d;
	cout << "Enter d:  ";
	cin >> d;
	b.set(d);
	b.get();
	cout << "Enter c and d    ";
	cin >> c >> d;
	b.set(c,d);
	b.get();
	return 0;
}
