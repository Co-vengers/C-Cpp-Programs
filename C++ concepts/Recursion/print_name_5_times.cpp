#include <iostream>
using namespace std;

void func(int i, int a){
	if(i > a){
		return;
	}
	cout<<i<<" Vyom"<<endl;
	func(i + 1, a);
}

int main(){
	int a;
	cin>>a;
	func(1, a);
	return 0;
}