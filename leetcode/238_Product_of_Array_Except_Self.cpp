class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n);
        int left = 1;
        int right = 1;
        for(int i = 0;i < n;++i){
            ans[i] = left;
            left *= nums[i];
        }
        for(int j = n - 1;j >= 0; --j){
            ans[j] *= right;
            right *= nums[j];
        }
        return ans;
    }
};



/*
nums = [1,2,3,4]

left = 1 | i = 0 | 
    ans[i]=>ans[0] = left = 1
    left = left * nums[0] => left = 1 * 1 = 1
left = 1 | i = 1
    ans[i]=>ans[1] = left = 1
    left = 1 * nums[1] => 1 * 2 = 2
left = 2 | i = 2
    ans[2] = 2
    left = 2 * 3 = 6
left = 6 | i = 3
    ans[3] = 6
    left = 6 * 4 = 24
left = 24 | i = 4
    exit

ans = [1, 1, 2, 6]

---------------------------------------------

right = 1 | i = 3
    ans[3] = 6 * 1
    right = 1 * 4 = 4
right = 4 | i = 2
    ans[2] = 2 * 4 = 8
    right = 4 * 3 = 12
right = 12 | i = 1
    ans[1] = 1 * 12 = 12
    right = 12 * 2 = 24
right = 24 | i = 0
    ans[0] = 1 * 24 = 24
    right = 24 * 1 = 24
right = 24 | i = -1
    exit

ans = [24, 12, 8, 6]


*/