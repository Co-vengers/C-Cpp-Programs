#include<iostream>
using namespace std;

class Test{
public:
	virtual void show(){					//virtual function is used to be overriden in derived class
		cout<<"Hello from Test"<<endl;
	}
	void display(){
		cout<<"Hello from display"<<endl;
	}
};

class Test_1 : public Test{
public:
	virtual void show(){
		cout<<"Hello from Test_1"<<endl;
	}
};

class Test_2 : public Test_1{
public:
	void show(){
		cout<<"Hello from Test_2"<<endl;
	}
};

int main(){
	Test_2 t2;
	t2.show();

	Test_1 t1;
	t1.show();

	Test t;
	t.show();

	t2.display(); 	

	return 0;
}