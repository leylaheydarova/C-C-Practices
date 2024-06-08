#include <iostream>
using namespace std;
//declaration of a class //
class SimpleClass{
	public:
		int number;
};

int main(){
	SimpleClass Myobj;
	Myobj.number = 5;
	cout << "objectt field value is "<< Myobj.number << "\n";
	return 0;
}
