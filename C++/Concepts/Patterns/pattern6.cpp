#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < i ; j++){
                cout<<" ";
            }
            for(int k = 2*n-i-1 ; k > i ; k--){
                cout<<"*";
            }
            cout<<"\n";
        }
    }
};

int main(){
    Solution s1;
    int n = 5;
    // cin>>n;
    s1.pattern1(n);
    return 0;
}

// output:

// *********
//  *******
//   *****
//    ***
//     *


// loop for k goes like (for n = 5):
//     k   i
//     9 - 0 => 9 times
//     8 - 1 => 7 times
//     7 - 2 => 5 times
//     6 - 3 => 3 times
//     5 - 4 => 1 time
//     4 - 5 => terminate