#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverse(int i, int n, vector<int> &nums){
    if(i >= n/2){
        return;
    }
    swap(nums[i], nums[n-i-1]);
    reverse(i + 1, n, nums);
}

int main(){
    vector<int> nums = {1, 2, 3, 4, 5};
    
    int n = nums.size();
    reverse(0, n, nums);
    for(int i = 0 ; i < n ; i++){
        cout<<nums[i]<<endl;
    }
    return 0;
}