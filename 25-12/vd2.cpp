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
	printf("\nLinked list:");
	NODE *p = head;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	
	NODE *node11 = createNode(11);
	node9->next = node11;
	node11->next = node12;
	
	printf("\nAfter inserting 11:");
	printf("\nLinked list:");
	p = head;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
	
    return 0;
}
