#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases:";
	cin>>t;
	while(t--){
		int a, b;
		cout<<"Enter two numbers to swap"<<endl;
		cin>>a>>b;

		cout<<"The given values are a = "<<a<<" and b = "<<b<<endl;
		cout<<"Let's perform swapping"<<endl;
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;

		cout<<"After swapping a = "<<a<<" and b = "<<b<<endl;
	}
	return 0;
}



// a = 10 => 1010				
// b = 5 => 0101

// a = a ^ b => 1010 ^ 0101 => 1111 => 15
// b = a ^ b => 1111 ^ 0101 => 1010 => 10
// a = a ^ b => 1111 ^ 1010 => 0101 => 5


// a	b	o/p

// 0   0   0
// 1   0   1
// 0   1   1
// 1   1   0
