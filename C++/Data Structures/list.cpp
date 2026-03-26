#include <iostream>
#include <string>
using namespace std;

class List{
private:
	
public:
	List(int list_size = 10){
		int list[list_size];
		int endptr = -1;
	}

	string insert(int num){
		if(isFull()){
			return "List overflow";
		}

		int pos;

		if(isEmpty()){
			endptr++;
			list[endptr] = num;
			pos = endptr;
			return "Element added at position: " + to_string(pos);
		}

		for(int ele = 0 ; ele <= endptr ; ele++){
			if(num < list[ele]){
				endptr++;
				for(int temp = endptr ; temp > ele ; temp--){
					list[temp] = list[temp - 1];
				}
				list[ele] = num;
				pos = ele;
				break;
			}
			else{
				endptr++;
				list[endptr] = num;
				pos = endptr;
			}
		}
		return "Element added at position: " + to_string(pos);
	}

	void display(){
		for(int i = 0 ; i <= endptr ; i++){
			cout<<list[i]<<endl;
		}
	}

	// void delete(int num){

	// }

	bool isEmpty(){
		if(endptr == -1){
			return true;
		}
		return false;
	}

	bool isFull(){
		if(endptr == list_size - 1){
			return true;
		}
		return false;
	}
}

int main(){
	int list_size;
	cout<<"Enter size of list: "<<endl;
	cin>>list_size;

	List list(list_size);

	list.insert(10);
	list.display();

}