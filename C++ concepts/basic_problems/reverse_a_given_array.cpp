#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void compute(vector<int> &nums){
        int r = nums.size() - 1, l = 0;
        while(true){
            swap(nums[l++], nums[r--]);
            if(r < l){
                break;
            }
        }
        for(int i = 0; i < nums.size(); i++){
            cout<<nums[i]<<endl;
        }
    }
};

int main(){
    vector<int> nums = {1, 2, 4, 5 ,7};
    Solution s1;
    s1.compute(nums);

    return 0;
}