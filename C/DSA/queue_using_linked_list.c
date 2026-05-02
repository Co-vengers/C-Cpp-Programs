#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node *head = NULL, *rear = NULL;

struct node* newNode(int x);
void enque(int x);
void deque();
void display();

int main(){
	int ch;
    
    do
    {
        printf("\n----------------Queue----------------\n");
        printf("1. Enque\n");
        printf("2. Deque\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
    
        switch(ch)
        {
            case 1:{
            	int n;
            	printf("Enter a value: \n");
            	scanf("%d", &n);
            	enque(n);
            	break;
            }
            case 2:deque();break;
            case 3:display();break;
            case 4:break;
            default:printf("Invalid Choice, re-enter the choice again: ");
        }
    }
    while(ch!=4);

	return 0;
}

struct node* newNode(int x){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	temp -> data = x;
	temp -> next = NULL;
	return temp;
}

void enque(int x){
	struct node* new;

	new = newNode(x);
	if(head == NULL){
		head = rear = new;
	}

	else{
		rear -> next = new;
		rear = new;
	}
}

void deque(){
	struct node* temp;

	if(head == NULL){
		printf("Queue is empty!\n");
	}

	else{
		temp = head;
		head = head -> next;
		printf("Deleted element = %d\n", temp -> data);
		free(temp);
	}
}

void display(){
	struct node* curr;

	if(head == NULL){
		printf("Queue is empty!\n");
	}

	else{
		curr = head;
		while(curr != rear -> next){
			printf("%d\t", curr -> data);
			curr = curr -> next;
		}
	}
}