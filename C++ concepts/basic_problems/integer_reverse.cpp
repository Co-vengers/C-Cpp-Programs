#include <iostream>
#include <string>
using namespace std;

class Solution{
public:
	int get_ascii_char(char ch){
		int ret_int = ch;
		return ret_int;
	}

	int str_to_dec(string str){
		int dec = 0;
		int ascii_of_zero = get_ascii_char('0');
		for(int i=0;i<str.length();i++){
			int ascii_value = get_ascii_char(str[i]);
			dec = dec * 10 + (ascii_value - ascii_of_zero);
		}
		return dec;
	}

	int reverse(string str){
		int count;
		for(char ch : str){
			if(ch == '0'){
				count++;
			}
			else{
				break;
			}
		}

		int str_to_int = str_to_dec(str);
		int res = 0;
		while(str_to_int > 0){
			res = res * 10 + (str_to_int % 10);
			str_to_int = str_to_int / 10;
		}

		for(int i=0;i<count;i++){
			res = res * 10;
		}

		return res;
	}

};

int main(){
	Solution sol;
	string str;
	cout<<"Enter a number"<<endl;
	cin>>str;
	int result = sol.reverse(str);
	cout<<"Reversed interger = "<<result<<endl;
	return 0;
}