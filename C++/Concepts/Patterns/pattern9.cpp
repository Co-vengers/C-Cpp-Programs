#include<iostream>
using namespace std;

class Solution{
    public:
    void pattern1(int n){
    	int k = 1;
        for(int i = 0 ; i < n ; i++){
        	int m = k;
            for(int j = 0 ; j <= i ; j++){
                cout<<m;
                m = !m;
            }
            k = !k;
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

// alternative method:

// void pattern1(int n) {
//     for(int i = 0; i < n; i++) {
//         for(int j = 0; j <= i; j++) {
//             cout << (i + j + 1) % 2;
//         }
//         cout << "\n";
//     }
// }

// output:

// 1
// 01
// 101
// 0101
// 10101