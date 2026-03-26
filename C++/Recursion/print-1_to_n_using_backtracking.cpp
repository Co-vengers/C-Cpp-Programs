#include <iostream>
using namespace std;

void func(int n, int i){
	if(n < i){
		return;
	}
	func(n-1, i);
	cout<<n<<endl;
}

int main(){
	int n;
	cin>>n;
	func(n, 1);
	return 0;
}