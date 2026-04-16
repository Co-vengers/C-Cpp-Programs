#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int> per;
		for(int i = 0 ; i < n ; i++){
			int sac = i + 1;
			per.push_back(sac);
			int med = n + 2*i + 1;
			per.push_back(med);
			int nxt = n + 2*i + 2;
			per.push_back(nxt);
		}
		for(auto it : per){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}