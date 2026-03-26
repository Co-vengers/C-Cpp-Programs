#include<iostream>
using namespace std;

class Test{
private:
	int a;
	short b;
	long c;
	long long d;
	char e;
	float f;
	double g;
	long double h;
public:
	Test(int a, short b, long c, long long d, char e, float f, double g, long double h){
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
		this->e = e;
		this->f = f;
		this->g = g;
		this->h = h;
		cout<<"the datatypes are initialized as:"<<endl;
		cout<<"a = "<<this->a<<endl;
		cout<<"b = "<<this->b<<endl;
		cout<<"c = "<<this->c<<endl;
		cout<<"d = "<<this->d<<endl;
		cout<<"e = "<<this->e<<endl;
		cout<<"f = "<<this->f<<endl;
		cout<<"g = "<<this->g<<endl;
		cout<<"h = "<<this->h<<endl;
	}
	void getDatatype() {
        cout << "Datatype of a = " << typeid(a).name() << " " << "Size of a = " << sizeof(a) << " bytes" << endl;
        cout << "Datatype of b = " << typeid(b).name() << " " << "Size of b = " << sizeof(b) << " bytes" << endl;
        cout << "Datatype of c = " << typeid(c).name() << " " << "Size of c = " << sizeof(c) << " bytes" << endl;
        cout << "Datatype of d = " << typeid(d).name() << " " << "Size of d = " << sizeof(d) << " bytes" << endl;
        cout << "Datatype of e = " << typeid(e).name() << " " << "Size of e = " << sizeof(e) << " bytes" << endl;
        cout << "Datatype of f = " << typeid(f).name() << " " << "Size of f = " << sizeof(f) << " bytes" << endl;
        cout << "Datatype of g = " << typeid(g).name() << " " << "Size of g = " << sizeof(g) << " bytes" << endl;
        cout << "Datatype of h = " << typeid(h).name() << " " << "Size of h = " << sizeof(h) << " bytes" << endl;
    }

};

int main(){
	Test t1(10, 3, 6467, 34347545734747, 'a', 32532.626, 33532.57547, 523532523.66328453);
	t1.getDatatype();
	return 0;
}