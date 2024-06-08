#include <iostream>
using namespace std;
//generalized function//
template <class X> void show (X arg){
	cout << "Value is " << arg << endl;
}

int main(){
	int n = 5;
	double x = 3.6;
	char s = 'a';
	//call of generalized function://
	show(n+1);
	show(x+2);
	show(s);
	return 0;
}
