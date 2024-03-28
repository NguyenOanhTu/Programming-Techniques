#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}NODE;

typedef struct _LinkedList{
	NODE *head;
	NODE *tail;
}LIST;

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

NODE* deleteHead(NODE *head){
	if(head != NULL){
		NODE *p = head;
		head = head->next;
		free(p);
	}	
	return head;
}

NODE *deleteTail(NODE *head, NODE *tail){
	if(head != NULL){
		// 
	}
}
int main(){
	NODE *head, *tail;
	head = tail = NULL;
	int numbers[] = {5, 7, 9, 12, 19};
	for(int i = 0; i < 5; i++){
		int value;
//		printf("\nInput value: ");
//		scanf("%d", &value);
		value = numbers[i];
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
	
	// Delete head
	head = deleteHead(head);
	printf("\nDelete head: ");
	printLinkedList(head);
	
	// Delete tail
	NODE *q = NULL;
	NODE *p = head;
	while(p != tail){
		q = p;
		p = p->next;
	}
	q->next = NULL;
	free(p);
	tail = q;
	
	printf("\nDelete tail: ");
	printLinkedList(head);
	printf("\nTail data = %d", tail->data);
		
	q = NULL;
	p = head;
	while(p != NULL){
		if(p->data != 10){
			q = p;
			p = p->next;
		}
		else
			break;
	}
	if(q != NULL){
		q->next = p->next;
		free(p);
	}
	printf("\nDelete 10: ");
	printLinkedList(head);
	
    return 0;
}
