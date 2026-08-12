#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = n-1 ; j > i ; j--){
                cout<<" ";
            }
            char ch = 'A';
            for(int k = 0 ; k < 2*i+1 ; k++){
                k < i ? cout<<ch++ : cout<<ch--;
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

//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA