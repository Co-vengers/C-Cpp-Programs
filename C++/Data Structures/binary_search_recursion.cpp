#include <iostream>
#include <vector>
using namespace std;

int binary_search(vector<int> &nums, int low, int high, int target){
    if(low > high){
        return -1;
    }
    int mid = (high + low) / 2;
    if(nums[mid] == target){
        return mid;
    }
    else if(target > nums[mid]){
        low = mid + 1;
        return binary_search(nums, low, high, target);
    }
    else{
        high = mid - 1;
        return binary_search(nums, low, high, target);
    }
}

int main(){
    int target;
    cout<<"Enter a value to search:"<<endl;
    cin>>target;

    vector<int> nums = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    
    int low = 0, high = nums.size() - 1;
    int res = binary_search(nums, low, high, target);
    
    if(res == -1){
        cout<<"Element not found..."<<endl;
    }
    else{
        cout<<"Element found at index = "<<res<<endl;
    }
    
    return 0;
}