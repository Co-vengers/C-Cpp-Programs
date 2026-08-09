#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            char ch = 'A';
            for(int j = n ; j > i ; j--){
                cout<<ch++;
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

// ABCDE
// ABCD
// ABC
// AB
// A