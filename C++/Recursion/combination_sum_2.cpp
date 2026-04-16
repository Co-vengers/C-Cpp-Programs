#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void compute(int ind, int target, vector<int>& ds, vector<vector<int>>& ans, vector<int>& arr){
	if(target == 0){
		ans.push_back(ds);
		return;
	}

	for(int i = ind ; i < arr.size() ; i++){
		if(i > ind && arr[i] == arr[i - 1]) continue;
		if(arr[i] > target) break;
		ds.push_back(arr[i]);
		compute(i+1, target-arr[i], ds, ans, arr);
		ds.pop_back();
	}
}

int main(){
	int target = 8;
	vector<int> arr = {10, 1, 2, 7, 6, 1, 5};
	sort(arr.begin(), arr.end());
	vector<vector<int>> ans;
	vector<int> ds;
	compute(0, target, ds, ans, arr);
	for(auto vec : ans){
		for(auto it : vec){
			cout<<it<<" ";
		}
		cout<<endl;
	}
	return 0;
}