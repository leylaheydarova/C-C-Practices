#include<iostream>
using namespace std;
class a{
	private:
    int x;
    public:
    int y;

};
class b:public a{
	public:
	int z;
	void show(){
		cout<<"y="<<y<<endl;
		cout<<"z="<<z<<endl;
	}
	
	
};
int main(){
		b obj;
		obj.y=1;
		obj.z=2;
		obj.show();
		return 0;
	}
