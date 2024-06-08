#include <iostream>
using namespace std;
//generalized function//
template <class X, class Y> void show(X x, Y y){
	cout << " 1 - st argument: " << x << endl;
	cout << " 2 - nd argument: " << y << endl;
} 

int main(){
	//call of generalized function//
	show(1, 'a');
	show ("TEXT", 3.5);
	return 0;
}
