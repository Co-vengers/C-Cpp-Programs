#include <iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int count = 0;
	while(n--){
		int sum = 0;
		for(int i = 0 ; i < 3 ; i++){
			int inp;
			cin>>inp;
			sum+=inp;
		}
		if(sum >= 2){
			count++;
		}
	}
	cout<<count<<endl;
	return 0;
}