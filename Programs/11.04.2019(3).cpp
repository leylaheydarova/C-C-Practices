#include <iostream>
using namespace std;
class Test {
	public:
		Test() { cout << "Constructor is executed"<<endl;
		}
		~Test(){cout << "Destructor is created" << endl;
		}
};

int main(){
	Test();
	Test t;
	t.~Test();
	return 0;
}
