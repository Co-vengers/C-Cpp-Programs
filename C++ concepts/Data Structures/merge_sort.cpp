#include <iostream>
#include <vector>
using namespace std;

vector<int> nums = {9, 3, 7, 5, 6, 4, 8, 2};

void merge(int l, int mid, int h){
    int i = l, j = mid + 1;
    vector<int> temp;
    while(i <= mid && j <= h){
        if(nums[i] < nums[j]){
            temp.push_back(nums[i++]);
        }
        else{
            temp.push_back(nums[j++]);
        }
    }
    for( ; i <= mid; i++){
        temp.push_back(nums[i]);
    }
    for( ; j <= h; j++){
        temp.push_back(nums[j]);
    }

    for(int i = l, k = 0; i <= h; i++, k++){
        nums[i] = temp[k];
    }
}

void mergeSort(int l, int h){
    if(l < h){
        int mid = (l + h) / 2;
        mergeSort(l, mid);
        mergeSort(mid + 1, h);
        merge(l, mid , h);
    }
}

int main(){
    int l = 0, h = nums.size()-1;
    mergeSort(l, h);
    for(int i = 0; i <= h; i++){
        cout<<nums[i]<<endl;
    }

    return 0;
}