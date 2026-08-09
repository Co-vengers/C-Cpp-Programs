#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        int count = 1;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j <= 2*i+1 ; j++){
                j%2 ? cout<<" " : cout<<count++;
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
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15