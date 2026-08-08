#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                cout<<"*";
            }
            cout<<"\n";
        }
        for(int i = 0 ; i < n-1 ; i++){
            for(int k = n-1 ; k > i ; k--){
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

// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *