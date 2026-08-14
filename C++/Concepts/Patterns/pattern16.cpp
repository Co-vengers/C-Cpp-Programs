#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
        for(int i = 0 ; i < n ; i++){
            for(char ch = 'E'-i ; ch <= 'E' ; ch++){
                cout<<ch<<" ";
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

// E 
// D E 
// C D E 
// B C D E 
// A B C D E 