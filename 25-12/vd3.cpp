#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}NODE;

NODE *createNode(int value){
	NODE *node = (NODE*)malloc(sizeof(NODE));
	node->data = value;
	node->next = NULL;
	return node;
}

void printLinkedList(NODE *head){
	printf("\nLinked list:");
	NODE *p = head;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
}
int main(){
	NODE *head, *tail;
	NODE *node7 = createNode(7);
	NODE *node5 = createNode(5);
	NODE *node19 = createNode(19);
	NODE *node9 = createNode(9);
	NODE *node12 = createNode(12);
	
	node5->next = node7;
	node7->next = node9;
	node9->next = node12;
	node12->next = node19;
	
	head = node5;
	tail = node19;
	printLinkedList(head);
	
	NODE *A = createNode(2);
	A->next = head;
	head = A;
	printf("\nInsert A = 2: ");
	printLinkedList(head);
	
	NODE *B = createNode(21);
	tail->next = B;
	tail = B;
	printf("\nInsert B = 21: ");
	printLinkedList(head);
	
	NODE *C = createNode(10);
	NODE *p = head;
	NODE *q = head;
	while(p->data <= 10){
		q = p;
		p = p->next;
	}
	C->next = q->next;
	q->next = C;
	printf("\nInsert C = 10: ");
	printLinkedList(head);
	
    return 0;
}
