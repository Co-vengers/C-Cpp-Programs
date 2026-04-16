#include <iostream>
#include <vector>
using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;

		vector<int> p;
		for(int i = 0 ; i < n ; i++){
			int inp; cin>>inp;
			p.push_back(inp);
		}

		vector<int> a;
		for(int i = 0 ; i < n ; i++){
			int inp; cin>>inp;
			a.push_back(inp);
		}

		for(int i = 0 ; i < n ; i++){
			if(p[i] != a[i]){
				if(p[i+1] == a[i]){
					p[i] = p[i+1];
				}
				else if(p[i-1] == a[i]){
					p[i] = p[i-1];
				}
				else{
					cout<<"No"<<endl;
					break;
				}
			}
		}
		cout<<"Yes"<<endl;
	}
	return 0;
}