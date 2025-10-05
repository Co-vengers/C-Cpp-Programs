#include<iostream>
#include<unordered_map>
#include<string>
using namespace std;

class Hashmap{
private:
	unordered_map<int, string> hashMap;
public:
	void insert(int key, string value){
		hashMap[key] = value;
	}
	void delete_element(int key){
		string temp = hashMap[key];
		hashMap.erase(key);
		cout<<"the given key:"<<key<<"is been erased with the value"<<temp<<endl;
	}
	void show_hashMap(){
		for(auto it = hashMap.begin();it != hashMap.end(); it++){
			cout<<it->first<<":"<<it->second<<endl;
		}
	}
	void find_key(int key){
		if(hashMap.count(key) > 0){
			cout<<"the key is found with the value = "<<hashMap[key]<<endl;
		}
		else{
			cout<<"key not found"<<endl;
		}
	}
	void find_value(string value){
		bool found = false;
		for(const auto& pair : hashMap){
			if(pair.second == value){
				cout<<"the given value:"<<value<<"is found at "<<pair.first<<"key"<<endl;
				found = true;
			}

		}
		if(found == false){
			cout<<"value not found"<<endl;
		}
	}

};

int main(){
	Hashmap h1;
	h1.insert(0, "a");
	h1.insert(1, "b");
	h1.insert(2, "c");
	h1.show_hashMap();
	return 0;
}