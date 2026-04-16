#include <iostream>
#include <vector>
using namespace std;

bool parkour(pair<int, int> &curr, pair<int, int> &tar, vector<pair<int, int>> &ops, bool flag){
	if(curr == tar){
		cout<<"Yes"<<endl;
		flag = true;
		return flag;
	}

	if(curr.first > tar.first){
		return flag;
	}

	for(int i = 0 ; i < ops.size() ; i++){
		curr.first += ops[i].first;
		curr.second += ops[i].second;
		flag = parkour(curr, tar, ops, flag);
		if(flag){
			return flag;
		}
		curr.first -= ops[i].first;
		curr.second -= ops[i].second;
	}
	return flag;
}

int main(){
	int t; cin>>t;
	while(t--){
		int x, y; cin>>x>>y;
		pair<int, int> tar = {x, y};
		pair<int, int> curr = {0, 0};
		vector<pair<int, int>> ops = {{2, 1}, {3, 0}, {4, -1}};
		bool flag = false;
		flag = parkour(curr, tar, ops, flag);
		if(!flag){
			cout<<"No"<<endl;
		}
	}
	
	return 0;
}