#include <iostream>
using namespace std;

class Solution{
    public:
    void qsort(int a[], int lower, int upper){
        int temp = 0;
        if(lower < upper){
            temp = split(a, lower, upper);
            qsort(a, lower, temp-1);
            qsort(a, temp+1, upper);
        }
    }

    int split(int a[], int lower, int upper){
        int pivot = a[lower], left = lower + 1, right = upper, temp = 0;

        while(left <= right){
            while(a[left] < pivot){
                left++;
            }
            while(a[right] > pivot){
                right--;
            }

            if(left < right){
                temp = a[left];
                a[left] = a[right];
                a[right] = temp;
            }
        }
        temp = a[lower];
        a[lower] = a[right];
        a[right] = temp;

        return right;
    }
};

int main(){
    int a[] = {44, 33, 11, 55, 77, 90, 40, 60, 99, 22, 88, 66};
    int a_length = sizeof(a) / sizeof(a[0]);
    cout<<"Before sorting"<<endl;
    for(int i = 0; i < a_length; i++){
        cout<<a[i]<<"\t";
    }
    Solution s1;
    s1.qsort(a, 0, a_length-1);
    cout<<"\nAfter sorting"<<endl;
    for(int i = 0; i < a_length; i++){
        cout<<a[i]<<"\t";
    }

    return 0;
}