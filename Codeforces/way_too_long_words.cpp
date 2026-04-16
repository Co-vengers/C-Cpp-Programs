#include <iostream>
#include <string>
using namespace std;

int main(){
	int n;
	cin>>n;

	while(n--){
		string st;
		cin>>st;

		if(st.size() > 10){
			cout<<st[0]<<st.size()-2<<st[st.size()-1]<<endl;
		}
		else{
			cout<<st<<endl;
		}
	}
	return 0;
}