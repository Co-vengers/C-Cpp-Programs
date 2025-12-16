#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
    void merge(vector<int> &nums1, int m, vector<int> &nums2, int n){
        int write_idx = (m + n) - 1;
        int nums1_idx = m - 1;
        int nums2_idx = n - 1;

        while(nums2_idx >= 0){
            if(nums1_idx >= 0 && nums1[nums1_idx] > nums2[nums2_idx]){
                nums1[write_idx] = nums1[nums1_idx];
                nums1_idx--;
            }
            else{
                nums1[write_idx] = nums2[nums1_idx];
                nums2_idx--;
            }
            write_idx--;
        }
    }
};

int main(){
    vector<int> nums1 = {1, 2, 3, 0, 0, 0};
    vector<int> nums2 = {2, 4 ,6};

    int nums2_size = nums2.size();
    int nums1_size = nums1.size() - nums2_size;

    Solution s1;
    s1.merge(nums1, nums1_size, nums2, nums2_size);

    cout<<"After merge: "<<endl;
    for(int i = 0 ; i < nums1.size() ; i++){
        cout<<nums1[i]<<"\t";
    }

    return 0;
}