#include <iostream>
#include <queue>
using namespace std;

class Stack{
public:
	queue<int> q1;
	queue<int> q2;

	void push_s(int x){
		if(q1.empty()){
			q1.push(x);
		}

		else{
			while(!q1.empty()){
				int temp = q1.front();
				q1.pop();
				q2.push(temp);
			}

			q1.push(x);

			while(!q2.empty()){
				int temp = q2.front();
				q2.pop();
				q1.push(temp);
			}
		}
	}
	int pop_s(){
		if(!q1.empty()){
			int temp = q1.front();
			q1.pop();
			return temp;
		}
		return -1;
	}

	void display(){
		queue<int> t1;

		t1 = q1;

		while(!t1.empty()){
			int temp = t1.front();
			t1.pop();
			cout<<temp<<" ";
		}
	}
};

int main(){
	Stack s;
	int choice;
    do {
        cout<<endl<<"----------Stack----------"<<endl;
        cout<<"1. Push"<<endl;
        cout<<"2. Pop"<<endl;
        cout<<"3. Display"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch(choice) {
            case 1:{
            	int n; 
            	cout <<"Enter a number: "; 
            	cin>>n; 
            	s.push_s(n); 
            	break;
            }
            case 2:{
            	int res = s.pop_s();
        		if(res != -1)
            		cout << "Deleted element = " << res << endl;
        		break;
            }
            case 3: s.display(); break;
            case 4: exit(0);
            default: cout<<"Wrong choice"<<endl;
        }
    }
    while(choice != 4);
    return 0;
}