#include <iostream>
using namespace std;

bool solve(int x, int y){
	if(x == 0 && y == 0) return true;
	if(x < 0) return false;

	return solve(x-2, y-1) || solve(x-3, y) || solve(x-4, y+1);
}

int main(){
	int t; cin>>t;
	while(t--){
		int x, y; cin>>x>>y;
		bool res = solve(x, y);
		if(res){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}