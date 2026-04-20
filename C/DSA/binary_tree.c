#include <stdio.h>
#include <stdlib.h>

struct Node{
	int data;
	struct Node* ladd;
	struct Node* radd;
};

// Global variable root node
struct Node* root = NULL;

// Function decalarations
struct Node* create(struct Node* p, int n);
void inorder(struct Node* p);
void preorder(struct Node* p);
void postorder(struct Node* p);

int main(){
	int ch, n;

	do{
		printf("\n----------Tree----------\n");
		printf("1. Create\n");
		printf("2. Inorder\n");
		printf("3. Preorder\n");
		printf("4. Postorder\n");
		printf("5. Exit\n");
		scanf("%d", &ch);
		switch(ch){
		// Function calling inside switch
		case 1: printf("Enter a value, press 0 to quit: \n");
			scanf("%d", &n);
			while(n != 0){
				root = create(root, n);
				printf("Enter next value: \n");
				scanf("%d", &n);
			}
			break;
		case 2: inorder(root); break;
		case 3: preorder(root); break;
		case 4: postorder(root); break;
		case 5: break;
		default: printf("Invalid choice: \n");
		}
	}
	while(ch != 5);
}

// Functions definition
struct Node* create(struct Node* p, int n){
	if(p == NULL){
		p = (struct Node*)malloc(sizeof(struct Node));
		p -> ladd = NULL;
		p -> data = n;
		p -> radd = NULL;
	}
	else{
		if(n < p -> data){
			p -> ladd = create(p -> ladd, n);
		}
		else if(n > p -> data){
			p -> radd = create(p -> radd, n);
		}
		else{
			printf("Duplicate elements are not allowed\n");
		}
	}
	return p;
}

void inorder(struct Node* p){
	if(p != NULL){
		inorder(p -> ladd);
		printf("%d\t", p -> data);
		inorder(p -> radd);
	}
}

void preorder(struct Node* p){
	if(p != NULL){
		printf("%d\t", p -> data);
		inorder(p -> ladd);
		inorder(p -> radd);
	}
}

void postorder(struct Node* p){
	if(p != NULL){
		inorder(p -> ladd);
		inorder(p -> radd);
		printf("%d\t", p -> data);
	}
}