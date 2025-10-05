#include <iostream>
#include <string>
using namespace std;

class Test{

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

};
int main(){
	Test t1;
    cout<<"Enter a number: "<<endl;
    string str;
    cin>>str;
	cout<<"The given string = "<<str<<endl;
	cout<<"datatype = "<<typeid(str).name()<<endl;

	int dec_value = t1.str_to_dec(str);
	cout<<"converted string to decimal = "<<dec_value<<endl;
	cout<<"datatype = "<<typeid(dec_value).name()<<endl;
	return 0;
}
