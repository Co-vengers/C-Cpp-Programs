#include <stdio.h>

void enqueue(int x);
void deque();
void display();

int a[4], rear = 0, front = 0, n = 4;

int main(){
	enqueue(10);
	enqueue(20);
	enqueue(30);
	deque();
	enqueue(40);
	display();
	return 0;
}

void enqueue(int x){
	if(front == (rear + 1) % n){
		printf("Overflow\n");
	}

	else{
		rear = (rear + 1) % n;
		a[rear] = x;
	}
}

void deque(){
	if(front == rear){
		printf("Underflow\n");
	}

	else{
		// as front always points to the empty block
		// and insertion starts from rear + 1 (when rear was = front)
		// to delete the element from front
		// we need to increment the front first
		front = (front + 1) % n;
		printf("%d\n", a[front]);
	}
}

void display(){
	int i;
	if(front == rear){
		printf("Queue is empty!\n");
	}

	else{
		i = front + 1;
		// rear points to the exact last element
		// to print till last element we need to
		// iterate till rear + 1 otherwise the loop
		// will break as it hits the last element
		// and it won't be printed
		while(i != (rear + 1) % n){
			printf("%d\t", a[i]);
			i = (i + 1) % n;
		}
	}
}