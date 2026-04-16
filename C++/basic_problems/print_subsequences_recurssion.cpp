#include <iostream>
#include <vector>
using namespace std;

void compute(int i, vector<int> &nums, int arr[], int n){
    if(i == n){
        if(nums.size() == 0){
            cout<<"{}";
        }
        for(auto it : nums){
            cout<<it<<" ";
        }
        cout<<endl;
        return;
    }
    compute(i + 1 , nums, arr, n);
    nums.push_back(arr[i]);
    compute(i + 1 , nums, arr, n);
    nums.pop_back();
}

int main(){
    int arr[] = {3, 1, 2};
    vector<int> nums;
    compute(0, nums, arr, 3);
    return 0;
}