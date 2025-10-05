#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

class Solution{
public:
	bool isValid(string s){
		stack<char> stk;
		for(char c : s){
			if(c == '(' || c == '[' || c == '{'){
				stk.push(c);
			}
			else if(stk.empty() || !match(stk.top(), c)){
				return false;
			}
			else{
				stk.pop();
			}
		}
		return stk.empty();
	}

	bool match(char left, char right){
		return (left == '(' && right == ')') || (left == '[' && right == ']') || (left == '{' && right == '}');
	}
};

int main(){
	Solution s1;
	vector<string> test = {"[()]({})", "]()[{}]", "{([)]}", "{[]})"};
	for(string s : test){
		cout<<boolalpha<<s1.isValid(s)<<endl;
	}
	return 0;
}