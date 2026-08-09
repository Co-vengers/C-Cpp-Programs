#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        int j;
        for(int i = 0 ; i < n ; i++){
            for(j = 0 ; j <= i ; j++){
                cout<<j+1;
            }
            for(int k = 2*n-2 ; k > 2*i ; k--){
                cout<<" ";
            }
            int m = j;
            for(int l = 0 ; l <= i ; l++){
                cout<<m--;
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

// loop k goes like (for n = 5):
//     k   i
//     8 - 0(2) => 8 spaces
//     8 - 1(2) => 6 spaces
//     8 - 2(2) => 4 spaces
//     8 - 3(2) => 2 spaces
//     8 - 4(2) => 0 spaces
//     8 - 5(2) => terminate

// output:
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321