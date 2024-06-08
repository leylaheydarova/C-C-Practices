#include <iostream>
using namespace std;
//Class prototype//
class B;
//Class with privated field and method//
class A{
	double x;
	public:
		A(double z) { x = z;
		}
		double summa (B b);
}a(3.5);

//Class with privated field and friend method //
class B{
	double y;
	public:
		B(double z) { y = z;
		}
	// friend method //
	friend double A :: summa (B b);
}b(2.3);

int main (){
	cout << "Total is " << a.summa(b) << endl;
	return 0; 
}
double A :: summa (B b){
	return x + b.y;
}
