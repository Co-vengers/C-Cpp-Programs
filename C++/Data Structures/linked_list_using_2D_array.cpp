#include <iostream>
using namespace std;

class List{
public:
	int list[10][2];
	int head;
	int avail;

	List(){
		head = -1;
		avail = 0;

		for(int i = 0; i < 9 ; i++){
			list[i][1] = i + 1;
		}
		list[9][1] = -1;
	}

	int get_mem(){
		if(avail == -1){
			return -1;
		}

		int new_index = avail;
		avail = list[avail][1];
		list[new_index][1] = -1;
		return new_index;
	}

	void insert(int ele){
		int mem_block = get_mem();
		if(mem_block == -1){
			cout<<"List oveflow"<<endl;
			return;
		}

		else{
			list[mem_block][0] = ele;
			list[mem_block][1] = -1;

			
			if(head == -1){
				head = mem_block;
			}
			else{
				int temp = head;

				while(list[temp][1] != -1){
					temp = list[temp][1];
				}
				list[temp][1] = mem_block;
			}
		}

	}

	// void delete(int pos){
	// 	if(head == -1){
	// 		cout<<"List is empty"<<endl;
	// 		return;
	// 	}
	// 	if(pos == head){

	// 	}
	// }

	void display(){
		if(head == -1){
			cout<<"List is empty"<<endl;
			return;
		}

		int temp = head;
		while(temp != -1){
			cout<<list[temp][0]<<endl;
			temp = list[temp][1];
		}
	}
};

int main(){
	List l1;
	l1.insert(10);
	l1.insert(20);
	
	l1.display();
	return 0;
}