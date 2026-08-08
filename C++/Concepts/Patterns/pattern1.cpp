#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= i ; j++){
                cout<<j+1;
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

// 1
// 12
// 123
// 1234
// 12345
