#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            int k = 1;
            for(int j = 5 ; j > i ; j--){
                cout<<k++;
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

// 12345
// 1234
// 123
// 12
// 1