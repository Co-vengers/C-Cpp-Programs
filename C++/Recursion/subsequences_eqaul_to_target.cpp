#include <iostream>
#include <vector>
using namespace std;

void compute(int ind, vector<int> &ds, vector<int> &arr, int n, int sum, int s){
    if(ind == n){
        if(sum == s){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
        }
        return;
    }

    // pick condition
    sum += arr[ind];
    ds.push_back(arr[ind]);
    compute(ind+1, ds, arr, n, sum, s);
    sum -= arr[ind];
    ds.pop_back();

    // not pick condition
    compute(ind+1, ds, arr, n, sum, s);
}

int main(){
    vector<int> arr = {1, 2, 1};
    vector<int> ds;
    int s = 4;
    compute(0, ds, arr, arr.size(), 0, s);
    return 0;
}