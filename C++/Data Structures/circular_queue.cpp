#include <iostream>
using namespace std;

class Queue{
public:
	int queue[4];
	int front;
	int rear;

	Queue(){
		front = -1;
		rear = -1;
		int queue_size = sizeof(queue) / sizeof(queue[0]);
	}

	void insert(){
		cout<<"Enter a number to insert: "<<endl;
		int num;
		cin>>num;


	}

	int isFull(){
		if(rear > front){
			if(rear - front == queue_size - 1){
				return true;
			}
		}
		else if(rear < front){
			if(front % rear == 1){
				return true;
			}
		}
		else{
			return false;
		}
	}
}