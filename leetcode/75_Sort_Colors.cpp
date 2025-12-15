#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i = -1, j = nums.size(), k = 0;
        while(k < j){
            if(nums[k] == 0){
                i++;
                swap(nums[i], nums[k]);
                k++;
            }
            else if(nums[k] == 2){
                j--;
                swap(nums[j], nums[k]);
            }
            else{
                k++;
            }
        }
    }
};

/*  nums = [2,0,2,1,1,0]




*/