#include<iostream>
using namespace std;

class Test{
private:
	int width;
public:
	// Default constructor
	Test(){
		cout<<"This is default constructor"<<endl;
		width = 0;
	}
	// Parameterized constructor
	Test(int w){
		cout<<"This is parameterized constructor"<<endl;
		width = w;
	}
	//copy constructor(copies the content of another object)
	Test(Test &t){
		width = t.width;
	}

	// getter method to access private member outside of the class
	const int getWidth(){
		return width;
	}
};

int main(){
	Test t1;	// calling default constructor
	Test t2(20);	// calling parameterized constructor
	Test t3(t1);
	cout<<"width corresponding to t1(default) = "<<t1.getWidth()<<endl;
	cout<<"width corresponding to t2 = "<<t2.getWidth()<<endl;
	cout<<"width corresponding to t3 = "<<t3.getWidth()<<endl;
	
	return 0;
}

/*
properties of constructor:
	has same name as that of class 
	has no return type
	automatically invokes when an object  is instantiated
	a class can have multiple constructors through constructor overloading
	there are 3 types of constructors:
		default
		parameterized
		copy
*/