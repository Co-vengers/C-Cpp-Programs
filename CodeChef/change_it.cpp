#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cout<<"Enter no. of test cases:"<<endl;
	cin>>t;
	while(t--){
		vector<int> test;
		int test_size;
		cout<<"Size of array:"<<endl;
		cin>>test_size;

		for(int i=0;i<test_size;i++){
			cout<<"Enter"<<i+1<<"value:"<<endl;
			int get_input;
			cin>>get_input;
			test.push_back(get_input);
		}
		map<int, int> num_to_freq;
		for(auto ele : test){
			num_to_freq[ele]++;
		}
		int maxi = INT_MIN;
		int maxi_freq_element = 0;
		for(auto entry : num_to_freq){
			cout<<entry.first<<":"<<entry.second<<endl;
		}

		for(auto entry : num_to_freq){
			if(entry.second > maxi){
				maxi = entry.second;
				maxi_freq_element = entry.first;
			}
		}
		cout<<"Maximum frequency element = "<<maxi_freq_element<<endl;

		int count = 0;
		for(auto ele : test){
			if(ele != maxi_freq_element){
				count++;
			}
		}
		cout<<"No. of moves = "<<count<<endl;
	}
	return 0;
}