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

		int mini = 10000;
		for(auto entry : ch){
			if(entry.second < mini){
				mini = entry.second;
			}
		}
		cout<<mini<<endl;
	}

};

int main(){
	Solution s1;
	string str = "racecar";
	s1.compute(str);

	return 0;
}