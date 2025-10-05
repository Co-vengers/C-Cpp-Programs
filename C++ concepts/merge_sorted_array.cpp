//https://leetcode.com/problems/merge-sorted-array/submissions/1642349362/?envType=study-plan-v2&envId=top-interview-150

#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
	vector<int> merge(vector<int> nums1, int m, vector<int> nums2, int n){
		int i = m - 1;
		int j = n - 1;
		int k = m + n - 1;
		while(j >= 0){
			if(i >= 0 && nums1[i] > nums2[j]){
				nums1[k] = nums1[i];
				i--;
			}
			else{
				nums1[k] = nums2[j];
				j--;
			}
			k--;
		}
		return nums1;
	}
};

int main(){
	Solution s;
	vector<int> nums1, nums2;
	int n, m;
	cout<<"Enter no. of elements of 1st array:"<<endl;
	cin>>n;

	for(int i=0;i<n*2;i++){
		cout<<"Enter "<<i+1<<" element of 1st array:"<<endl;
		int element;
		cin>>element;
		nums1.push_back(element);
	}

	cout<<"Enter no. of elements of 2nd array:"<<endl;
	cin>>m;
	for(int i=0;i<m;i++){
		cout<<"Enter "<<i+1<<" element of 2nd array:"<<endl;
		int element;
		cin>>element;
		nums2.push_back(element);
	}
	vector<int> merged_result = s.merge(nums1, n*2, nums2, n);
	for(int i=0;i<2*n;i++){
		cout<<"The elements of merged array = "<<merged_result[i]<<endl;
	}
	return 0;

}