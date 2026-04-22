#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node{
public:
	int data;
	Node* ladd;
	Node* radd;

	Node(int data){
		this -> data = data;
		ladd = NULL;
		radd = NULL;
	}
};

class Tree{
public:
	Node* root = NULL;

	Node* create(Node* p, int n){
		if(p == NULL){
			p = new Node(n);
		}
		else{
			if(n < p -> data){
				p -> ladd = create(p -> ladd, n);
			}
			else if(n > p -> data){
				p -> radd = create(p -> radd, n);
			}
			else{
				cout<<"Duplicate element not allowed: "<<endl;
			}
		}
		return p;
	}

	void inorder(Node* p){
		if(p != NULL){
			inorder(p -> ladd);
			cout<<p -> data<<"\t";
			inorder(p -> radd);
		}
	}

	void preorder(Node* p){
		if(p != NULL){
			cout<<p -> data<<"\t";
			preorder(p -> ladd);
			preorder(p -> radd);
		}
	}

	void postorder(Node* p){
		if(p != NULL){
			postorder(p -> ladd);
			postorder(p -> radd);
			cout<<p -> data<<"\t";
		}
	}

	void levelorder(Node* root){
		vector<vector<int>> ans;
		if(root != NULL){
			queue<Node*> q;
			q.push(root);
			while(!q.empty()){
				int s = q.size();
				vector<int> level;

				for(int i = 0 ; i < s ; i++){
					Node* temp = q.front();
					q.pop();
					if(temp -> ladd != NULL) q.push(temp -> ladd);
					if(temp -> radd != NULL) q.push(temp -> radd);
					level.push_back(temp -> data);
				}
				ans.push_back(level);
			}
			for(auto &vec : ans){
				for(auto &it : vec){
					cout<<it<<" ";
				}
				cout<<"\n";
			}
		}
	}
};

int main(){
	int ch, n;
	Tree t1;

	do{
		cout<<"\n----------Tree----------\n";
		cout<<"1. Create\n";
		cout<<"2. Inorder\n";
		cout<<"3. Preorder\n";
		cout<<"4. Postorder\n";
		cout<<"5. Levelorder\n";
		cout<<"6. Exit\n";

		cin>>ch;
		switch(ch){
		case 1: cout<<"Enter value, press 0 to quit\n";
			cin>>n;
			while(n != 0){
				t1.root = t1.create(t1.root, n);
				cout<<"Enter another value: \n";
				cin>>n;
			}
			break;
		case 2: t1.inorder(t1.root); break;
		case 3: t1.preorder(t1.root); break;
		case 4: t1.postorder(t1.root); break;
		case 5: t1.levelorder(t1.root);break;
		case 6: break;
		default: cout<<"Invalid choice\n";
		}
	}
	while(ch != 6);
}