#include <iostream>
#include <vector>
using namespace std;

void compute(int ind, vector<int>& ds, vector<vector<int>>& ans, vector<int>& arr, int target){
	if(ind == arr.size()){
		if(target == 0){
			ans.push_back(ds);
		}
		return;
	}

	if(arr[ind] <= target){
		ds.push_back(arr[ind]);
		compute(ind, ds, ans, arr, target-arr[ind]);
		ds.pop_back();
	}
	
	compute(ind+1, ds, ans, arr, target);
}

int main(){
	int target = 7;
	vector<int> arr = {2, 3, 6, 7};
	vector<int> ds;
	vector<vector<int>> ans;
	compute(0, ds, ans, arr, 7);

	for(auto vec : ans){
		for(auto it : vec){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}