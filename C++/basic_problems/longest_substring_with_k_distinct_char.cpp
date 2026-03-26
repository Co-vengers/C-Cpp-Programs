#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

class Solution{
public:
	void compute(string str, int k){
		map<char, int> char_freq;
		int l = 0, max_len = 0;
		for(int r = 0; r < str.size(); r++){
			char_freq[str[r]]++;
			while(char_freq.size() > k){
				char_freq[str[l]]--;
				if(char_freq[str[l]] == 0){
					char_freq.erase(str[l]);
				}
				l++;
			}
			max_len = max(max_len, r - l + 1);
		}
		cout<<max_len<<endl;
	}

};

int main(){
	string str = "aacccceenn";
	int k = 3;
	Solution s1;
	s1.compute(str, k);

	return 0;
}