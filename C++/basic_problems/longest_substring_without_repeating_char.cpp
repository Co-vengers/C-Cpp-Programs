#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution{
public:
	void compute(string str){
		map<char, int> char_freq;
		int l = 0, max_len = 0;

		for(int r = 0; r < str.size(); r++){
			char_freq[str[r]]++;
			while(char_freq[str[r]] > 1){
				char_freq[str[r]]--;
				l++;
			}
			max_len = max(max_len, r - l + 1);
		}
		cout<<max_len<<endl;
	}
};

int main(){
	string str = "abcabecabb";
	Solution s1;

	s1.compute(str);

	return 0;
}