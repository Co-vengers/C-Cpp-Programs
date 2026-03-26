#include <iostream>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases:"<<endl;
	cin>>t;
	while(t--){
		int a;
		cout<<"Enter a number to check:"<<endl;
		cin>>a;
		if((a & 1) == 1){
			cout<<"The given number is odd"<<endl;
		}
		else{
			cout<<"The given number is even"<<endl;
		}
	}
	return 0;
}


// odd:
// 011 & 001 = 001

// even:
// 110 & 001 = 000
// 010 & 001 = 000
// 100 & 001 = 000
