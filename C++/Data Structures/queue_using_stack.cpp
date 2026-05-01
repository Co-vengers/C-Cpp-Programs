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

	void display() {
	    stack<int> t2 = s2;
	    while (!t2.empty()) {
	        cout << t2.top() << " ";
	        t2.pop();
	    }

	    stack<int> t1 = s1;
	    stack<int> rev;

	    while (!t1.empty()) {
	        rev.push(t1.top());
	        t1.pop();
	    }

	    while (!rev.empty()) {
	        cout << rev.top() << " ";
	        rev.pop();
	    }

	    cout << endl;
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
            case 1:{
            	int n; 
            	cout <<"Enter a number: "; 
            	cin>>n; 
            	q.enque(n); 
            	break;
            }
            case 2:{
            	int res = q.deque();
        		if(res != -1)
            		cout << "Deleted element = " << res << endl;
        		break;
            }
            case 3: q.display(); break;
            case 4: exit(0);
            default: cout<<"Wrong choice"<<endl;
        }
    }
    while(choice != 4);
    return 0;

}