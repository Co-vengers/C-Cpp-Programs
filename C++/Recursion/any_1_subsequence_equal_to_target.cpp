#include <iostream>
#include <vector>
using namespace std;

bool compute(int ind, vector<int>& ds, vector<int>& arr, int n, int s, int sum){
	if(ind == n){
		if(s == sum){
			for(auto it : ds) cout<<it<<" ";
			cout<<endl;
			return true;
		}
		return false;
	}

	s += arr[ind];
	ds.push_back(arr[ind]);
	if(compute(ind+1, ds, arr, n, s, sum) == true) return true;

	s -= arr[ind];
	ds.pop_back();
	if(compute(ind+1, ds, arr, n, s, sum) == true) return true;

	return false;
}

int main(){
	vector<int> ds;
	vector<int> arr = {1, 2, 1};

	int sum = 2;

	compute(0, ds, arr, arr.size(), 0, sum);
	return 0;
}