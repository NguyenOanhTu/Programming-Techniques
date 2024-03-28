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

NODE* insertHead(NODE *head, int value){
	NODE *A = createNode(value);
	A->next = head;
	head = A;
	return head;
}

NODE* insertTail(NODE *tail, int value){
	NODE *B = createNode(value);
	tail->next = B;
	tail = B;
	return tail;
}

// ThoLTN: Please modify the code,
// Consider the case you insert to head and tail
void insertNode(NODE *head, int value){
	NODE *C = createNode(value);
	NODE *q = NULL;
	NODE *p = head;
	while(p->data < 10){ 
		q = p;
		p = p->next;
	}
	q->next = C;
	C->next = p;
}
int main(){
	NODE *head, *tail;
	head = tail = NULL;
	for(int i = 0; i < 5; i++){
		int value;
		printf("\nInput value: ");
		scanf("%d", &value);
		if(head == NULL){
			head = tail = createNode(value);
		}
		else{
			tail = insertTail(tail, value);
		}
		printLinkedList(head);
	}
	
	printf("\nLinked list after input: ");
	printLinkedList(head);
	
	head = insertHead(head, 2);
	printf("\nInsert A = 2: ");
	printLinkedList(head);
	
	tail = insertTail(tail, 21);
	printf("\nInsert B = 21: ");
	printLinkedList(head);

	printf("\nTail = %d", tail->data);

	insertNode(head, 10)	;
	printf("\nInsert C = 10: ");
	printLinkedList(head);
	
    return 0;
}
