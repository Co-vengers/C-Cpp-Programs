#include <stdio.h>

int isFull();
int isEmpty();
void push(int x);
void pop();
void display();

int a[100], top = -1, n = 99;

int main(){
	push(10);
	push(20);
	push(30);
	push(40);
	pop();
	push(50);
	display();

}

int isFull(){
	if(top == n){
		return 1;
	}
	return 0;
}

int isEmpty(){
	if(top == -1){
		return 1;
	}
	return 0;
}

void push(int x){
	if(isFull()){
		printf("Overflow\n");
	}

	else{
		a[++top] = x;
	}
}

void pop(){
	if(isEmpty()){
		printf("Underflow\n");
	}
	printf("%d\n", a[top--]);
}

void display(){
	int i;
	if(isEmpty()){
		printf("Stack is empty!\n");
	}

	else{
		for(i = 0 ; i <= top ; i++){
			printf("%d\t", a[i]);
		}
	}
}