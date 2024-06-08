#include <iostream>
using namespace std;
template < class T > T abs ( T n ){
	return n < 0 ?  -n :n ; // means ? represents if, if condition is true takes -n value, : represents else, else n value.//
}

int main (){
	double d = abs ( - 4.55);
	int i = abs ( -7);
	cout << d << "  " << i;
	return 0;
}
