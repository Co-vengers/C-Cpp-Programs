#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

bool palindrome(int i, int n, string &s){
    if(i >= n/2){
        return true;
    }
    if(s[i] != s[n - i - 1]){
        return false;
    }
    return palindrome(i+1, n, s);
}

int main(){
    string s = "MADAM";
    cout<<palindrome(0, s.size(), s);
    return 0;
}