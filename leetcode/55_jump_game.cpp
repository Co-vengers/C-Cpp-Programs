class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_reach = 0;
        for(int i=0;i<nums.size();i++){
            if(max_reach < i){
                return false;
            }
            max_reach = max(max_reach, i + nums[i]);
        }
        return true;
    }
};



// Input: nums = [2,3,1,1,4]
// Output: true
// Explanation: Jump 1 step from index 0 to 1, then 3 steps to the last index.