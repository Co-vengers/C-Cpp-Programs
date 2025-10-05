#include<iostream>
using namespace std;

class Test{
public:
	void add(){
		cout<<"Hello"<<endl;
	}

	void add(int a, int b){
		cout<<a<<" + "<<b<<" = "<<a + b<<endl;
	}

	void add(int a, int b, int c){
		cout<<a<<" + "<<b<<" + "<<c<<" = "<<a + b + c<<endl;
	}

	void add(int a, int b, double c){
		cout<<a<<" + "<<b<<" + "<<c<<" = "<<a + b + c<<endl;
	}
};

int main(){
	Test t1;
	t1.add();
	t1.add(10,20);
	t1.add(100,200,20);
	t1.add(100, 200, 300.1);
	return 0;
}