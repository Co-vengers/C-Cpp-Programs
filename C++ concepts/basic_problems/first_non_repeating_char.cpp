#include <iostream>
#include <string>
#include <map>
using namespace std;

class Solution{
public:
	void compute(string str){
		map<char, int> ch;
		for(auto ele : str){
			ch[ele]++;
		}

		for(char c : str){
			if(ch[c] == 1){
				cout<<c;
			}
		}
	}

};

int main(){
	Solution s1;
	string str = "racecar";
	s1.compute(str);

	return 0;
}