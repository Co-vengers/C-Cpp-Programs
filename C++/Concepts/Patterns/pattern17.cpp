#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = n ; j > i ; j--){
                cout<<"*";
            }
            for(int k = 0 ; k < 2*i ; k++){
                cout<<" ";
            }
            for(int l = n ; l > i ; l--){
                cout<<"*";
            }
            cout<<"\n";
        }

        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                cout<<"*";
            }
            for(int j = 2*(n-1) ; j > 2*i ; j--){
                cout<<" ";
            }
            for(int k = 0 ; k <= i ; k++){
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

// **********
// ****  ****
// ***    ***
// **      **
// *        *
// *        *
// **      **
// ***    ***
// ****  ****
// **********