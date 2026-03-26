#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

class Solution{
    public:
    int func(int n, int m, string &s1, string &s2){
        if(n < 0 || m < 0){
            return 0;
        }
        if(s1[n] == s2[m]){
            return 1 + func(n-1, m-1, s1, s2);
        }
        else{
            return max(func(n-1, m, s1, s2), func(n, m-1, s1, s2));
        }
    }

    int compute(string s1, string s2){
        int n = s1.size();
        int m = s2.size();

        return func(n-1, m-1, s1, s2);
    }


};

int main(){
    string s = "abcde";
    string t = "bdcea";

    Solution s1;
    int res = s1.compute(s, t);
    cout<<res<<endl;

    return 0;
}