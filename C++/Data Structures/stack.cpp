#include<iostream>
using namespace std;

class Stack{
public:
	
	static const int maxsize = 10;
	int stack[maxsize], top = -1;
	

	void push(){
		if(top == maxsize - 1){
			cout<<"Stack overflow"<<endl;
		}
		else{
			int num;
			cout<<"Enter a value in stack:"<<endl;
			cin>>num;
			stack[++top] = num;
		}
	}

	void pop(){
		if(top == -1){
			cout<<"Stack underflow"<<endl;
		}
		else{
			cout<<"The element deleted = "<<stack[top]<<endl;
			top--;
		}
	}

	void show(){
		cout << "The current stack contains:" << endl;
	    for(int i = 0; i <= top; i++)
	        cout << stack[i] << "\t";
	    cout << endl;
	}
};

int main(){
	Stack stk;
	int ch;

	do{
		cout << "\n----------------Stack----------------\n";
        cout << "Press 1 to Push the element into Stack\n";
        cout << "Press 2 to Pop the element from Stack\n";
        cout << "Press 3 to Display all elements from Stack\n";
        cout << "Press 4 to EXIT\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch(ch){
        	case 1 : stk.push();break;
        	case 2 : stk.pop();break;
        	case 3 : stk.show();break;
        	case 4 : break;
        	default : cout<<"Invalid choice"<<endl;
        }
	}
	while(ch != 4);
	return 0;

}