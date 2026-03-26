#include <iostream>
using namespace std;

struct Node{
	int info;
	int next;
};

class List{
public:
	Node list[10];
	int head;
	int avail;

	List(){
		head = -1;
		avail = 0;

		//create available memory space
		for(int i = 0 ; i < 9 ; i++){
			list[i].next = i + 1;
		}
		list[9].next = -1;
	}

	int get_mem(){
		//check if memory is available
		if(avail == -1) return -1;

		//copy avail to new index
		int new_index = avail;
		//shift avail to next node
		avail = list[avail].next;
		//unlink the new index
		list[new_index].next = -1;

		//return the unlinked new index node
		return new_index;
	}

	void insert(int data){
		int newNode = get_mem();

		if(newNode == -1){
			cout<<"Linked list overflow"<<endl;
			return;
		}

		list[newNode].info = data;
		list[newNode].next = -1;

		if(head == -1){
			head = newNode;
			return;
		}

		int temp = head;
		while(list[temp].next != -1){
			temp = list[temp].next;
		}
		list[temp].next = newNode;
	}

	void Delete(int pos){
		if(head == -1){
			cout<<"Linked list is empty"<<endl;
			return;
		}

		if(pos == 1){
			int temp = head;
			head = list[head].next;
			cout<<"Deleting item: "<<list[temp].info<<endl;
		}
		else{
			int temp = head;
			int count = 0;
			while(temp != -1){
				count++;
				temp = list[temp].next;
			}

			if(pos > count){
				cout<<"Given position exceeds list size"<<endl;
				return;
			}

			int front = head;
			int rear;

			for(int i = 0 ; i < pos - 1 ; i++){
				rear = front;
				front = list[front].next;
			}
			list[rear].next = list[front].next;
			cout<<"Deleting item: "<<list[front].info<<endl;
		}
	}

	void display(){
		int temp = head;
		while(temp != -1){
			cout<<list[temp].info;
			if(list[temp].next != -1){
				cout<<"->";
			}
			temp = list[temp].next;
		}
	}
};

// class Merging{
// public:
// 	List list3;

// 	void merge(List l1, List l2){
// 		int p = l1.head;
// 		int q = l2.head;

		
// 	}
// }

int main(){
	List l1;
	List l2;
	l1.insert(1);
	l1.insert(3);
	l1.insert(5);
	l1.insert(7);
	l1.insert(8);
	l1.insert(9);

	l2.insert(2);
	l2.insert(4);
	l2.insert(6);
	l2.insert(7);
	l2.insert(8);
	l1.display();
	cout<<"\n";
	l2.display();

	// Merging m1;


	return 0;
}