#include <iostream>
#include <stack>
using namespace std;

class Queue{
public:
	stack<int> s1;
	stack<int> s2;
	stack<int> temp;
	stack<int> temp2;

	void enque(int x){
		s1.push(x);
	}

	int deque(){
		if(s1.empty() && s2.empty()){
			cout<<"Queue is empty\n";
			return -1;
		}

		if(s2.empty()){
			while(!s1.empty()){
				int temp = s1.top();
				s1.pop();
				s2.push(temp);
			}
		}

		int temp = s2.top();
		s2.pop();
		return temp;
	}

	void display(){
		if(!s2.empty()){
			temp = s2;
			while(!temp.empty()){
				int t = temp.top();
				temp.pop();
				cout<<t<<" ";
			}
		}

		else{
			temp2 = s1;
			while(!temp2.empty()){
				int t = temp2.top();
				temp2.pop();
				temp.push(t);
			}
			while(!temp.empty()){
				int t = temp.top();
				temp.pop();
				cout<<t<<" ";
			}
		}
	}
};

int main(){
	Queue q;
	int choice;
    do {
        cout<<endl<<"----------Queue----------"<<endl;
        cout<<"1. Enqueue"<<endl;
        cout<<"2. Deque"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch(choice) {
            case 1: int n; cout <<"Enter a number: "; cin>>n; q.enque(n); break;
            case 2: q.deque(); break;
            case 3: q.display(); break;
            case 4: exit(0);
            default: cout<<"Wrong choice"<<endl;
        }
    }
    while(choice != 4);
    return 0;

}