#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
	int data;
	struct Node *next;
}NODE;
int main(){
	NODE *node7 = (NODE*)malloc(sizeof(NODE));
	node7->data = 7;
	node7->next = NULL;
	NODE *node5 = (NODE*)malloc(sizeof(NODE));
	node5->data = 5;
	node5->next = NULL;
	NODE *node19 = (NODE*)malloc(sizeof(NODE));
	node19->data = 19;
	node19->next = NULL;
	NODE *node9 = (NODE*)malloc(sizeof(NODE));
	node9->data = 9;
	node9->next = NULL;
	NODE *node12 = (NODE*)malloc(sizeof(NODE));
	node12->data = 12;
	node12->next = NULL;
	
	node7->next = node5;
	node5->next = node19;
	node19->next = node9;
	node9->next = node12;
	
	NODE *p = node7;
	while(p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
    return 0;
}
