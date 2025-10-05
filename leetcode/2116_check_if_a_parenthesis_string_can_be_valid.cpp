#include <iostream>
#include <string>
#include <stack>
#include <vector>

class Solution {
public:
    bool canBeValid(string s, string locked) {
        stack<char> stk;
        int strLen = s.size();
        for(int i = 0;i < strLen;i++){
            if(s[i] == '(' && stk.empty()){
                stk.push(s[i]);
            }
            else if(s[i] != '(' && stk.empty()){
                if(locked[i] == 0){
                    s[i] == '(';
                    stk.push(s[i]);
                }
            }
            else if(!stk.empty()){
                if(s[i] == '('){
                    stk.push(s[i]);
                }
                else{
                    stk.pop();
                }
            }
        }
        return stk.empty();
    }
};

int main(){
    Solution s1;
    vector<string> test = {"))()))", "()()", ")", "(((())(((())"};
    vector<string> test2 = {"010100", "0000", "0", "111111010111"};
    n = test.size();
    for(int i = 0;i<n;i++){
        cout<<boolalpha<<s1.canBeValid(test[i], test2[i])<<endl;
    }
    return 0;
}