#include <iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int k; cin>>k;
		int a1, b1; cin>>a1>>b1;
		int a2, b2; cin>>a2>>b2;

		int total_a = a1 + a2;
		int total_b = b1 + b2;

		if(total_a > total_b && total_a > total_b + k - 1){
			cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
		}
	}
	return 0;
}