#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node *next;

    Node(int data1, Node *next1 = nullptr) {
        data = data1;
        next = next1;
    }
};

Node *head = nullptr;
Node *prevNode = nullptr;

void create() {
    int num;
    char ch;
    cout<<"Enter a number: "<<endl;
    cin>>num;

    head = new Node(num);
    Node *curr = head;

    cout<<"To add more elements - Press Y: "<<endl;
    cin>>ch;

    while (ch == 'y' || ch == 'Y') {
        cout<<"Enter a number: "<<endl;
        cin>>num;
        Node *newNode = new Node(num);
        curr -> next = newNode;
        curr = newNode;

        cout<<"To add more elements - Press Y: "<<endl;
        cin>>ch;
    }
}

void insert() {
    int n, position, count = 1;

    //check for empty list
    if (head == nullptr) {
        cout<<"List is empty"<<endl;
    }

    //get input data and position of new node to be inserted
    else {
        cout<<"Enter a number: "<<endl;
        cin>>n;
        Node *newNode = new Node(n);

        cout<<"Enter position of insertion: "<<endl;
        cin>>position;

        if (position == 1) {
            newNode -> next = head;
            head = newNode;
        }

        //get the total no. of nodes in the list
        else {
            Node *curr = head;
            while (curr -> next != nullptr) {
                count++;
                curr = curr -> next;
            }

            if (position > count) {
                cout<<"Position exceeds the limit"<<endl;
            }

            //if position is equal to the no. of nodes i.e last node
            else if (position == count) {
                curr = head;
                while (curr -> next != nullptr) {
                    curr = curr -> next;
                }
                curr -> next = newNode;
            }

            //if position is less than no. of nodes
            else {
                curr = head;
                int i = 1;
                while (i < position) {
                    prevNode = curr;
                    curr = curr -> next;
                    i++;
                }
                prevNode -> next = newNode;
                newNode -> next = curr;
            }
        }
    }
}

void Delete() {
    if(head == nullptr){
        cout<<"List doesn't exist: "<<endl;
    }
    else{
        int position;
        cout<<"Enter the position to delete: "<<endl;
        cin>>position;

        if(position == 1){
            Node *curr = head;
            cout<<"Deleting element: "<<head -> data<<endl;
            head = head -> next;
            delete curr;
        }

        else{
            Node *curr = head;
            int count = 0;
            while(curr != nullptr){
                count++;
                curr = curr -> next;
            }

            if(position > count){
                cout<<"Given position exceeds list size: "<<endl;
            }
            else if(position > 1){
                curr = head;
                for(int i = 1; i < position - 1; i++){
                    curr = curr -> next;    //after the last iteration this node will the node just before the node that is to be deleted
                }
                Node *toDelete = curr -> next;  //this is the node to be deleted
                curr -> next = toDelete -> next;
                delete toDelete;
            }
        }
    }
}

void display() {
    if (head == nullptr) {
        cout<<"List is empty"<<endl;
    }
    else {
        Node *curr = head;
        while (curr != nullptr) {
            cout<<curr -> data<<endl;
            curr = curr -> next;
        }
    }
}

int main() {
    int choice;
    do {
        cout<<endl<<"----------Linked List----------"<<endl;
        cout<<"1. Create"<<endl;
        cout<<"2. Insert"<<endl;
        cout<<"3. Delete"<<endl;
        cout<<"4. Dispaly"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice: "<<endl;
        cin>>choice;

        switch(choice) {
            case 1: create(); break;
            case 2: insert(); break;
            case 3: Delete(); break;
            case 4: display(); break;
            case 5: exit(0);
            default: cout<<"Wrong choice"<<endl;
        }
    }
    while(choice != 5);
    return 0;
}