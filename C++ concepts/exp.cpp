#include<iostream>
using namespace std;

int main(){
	int x, d, y, count = 0, temp, per = 100;
	cout<<"Enter discount"<<endl;
	cin>>d;
	cout<<"Enter membership"<<endl;
	cin>>x;
	// temp = x;
	cout<<"Enter current amount"<<endl;
	cin>>y;
	while(y < x){
		count++;
		// int per = temp * (count * d / 100);
		// x = temp - per;
		temp = ((per - d) / 100) * x;
	}
	cout<<count<<endl;
	return 0;
}