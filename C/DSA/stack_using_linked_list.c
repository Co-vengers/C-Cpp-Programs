#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* head = NULL;

struct node* newNode(int x);
void push(int x);
void pop();
void display();

int main(){
	int ch;
    
    do
    {
        printf("\n----------------Stack----------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
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
            	push(n);
            	break;
            }
            case 2:pop();break;
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

void push(int x){
	struct node* new;
	if(head == NULL){
		head = newNode(x);
	}

	else{
		new = newNode(x);
		new -> next = head;
		head = new;
	}
}

void pop(){
	struct node* temp;
	if(head == NULL){
		printf("Stack empty!\n");
	}

	else{
		temp = head;
		head = head -> next;
		printf("Deleted element = %d\n", temp -> data);
		free(temp);
	}
}

void display(){
	struct node* curr = head;
	while(curr != NULL){
		printf("%d\t", curr -> data);
		curr = curr -> next;
	}
}