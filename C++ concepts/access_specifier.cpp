#include<iostream>
using namespace std;

class Test{
private:	//can only accessed inside the class
	int length;
protected:	// can only accessed by the derived class(child class)
	int width;
public:		// can be accessed anywhere with the object of the class
	int setLength(int l){
		length = l;		// accessing the private member of the same class
		return length;
	}
};
class Test2 : Test{
public:
	int setWidth(int w){
		width = w;	// accessing the the protected member from the parent class
		return w;
	}
};

int main(){
	Test t1;
	Test2 t2;
	cout<<t1.setLength(10)<<endl;
	cout<<t2.setWidth(20);
	return 0;
}