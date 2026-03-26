#include<iostream>
#include<vector>
using namespace std;

class Node{
public:
	int data;
	Node* next;

	Node(int data1, Node* next1){
		data = data1;
		next = next1;
	}
};

Node* convertVectorToLL(vector<int> nums){
	Node* head = new Node(nums[0], nullptr);	//assigning first element of linked list as head
	Node* mover = head;							//moving cursor to head
	for(int i=1;i<nums.size();i++){
		Node* temp = new Node(nums[i], nullptr);//create a new node to insert
		mover -> next = temp;					//point the next of current node(head) to newly created node
		mover = temp;							//make newly inserted node as current node
	}
	return head;
}

int main(){
	vector<int> nums = {1,2,3,4};
	//insert element to linked list
	Node* y = new Node(nums[0], nullptr);
	cout<<y->data;
	//convert array/vector to linked list
	Node* head = convertVectorToLL(nums);
	cout<<head->data;
	return 0;
}