#include <stdlib.h>
#include <stdio.h>
struct _Node
{
    char *word;
    struct _Node *next;
};

typedef struct _Node SNode;

SNode *newNode(char *word)
{
    SNode *nodeAddr = (SNode *)malloc(sizeof(SNode));
    nodeAddr->word = word;
    nodeAddr->next = NULL;
    return nodeAddr;
}

int isEmpty(SNode *root)
{
    return !root;
}

void push(SNode **root, char *word)
{
    SNode *nodeAddr = newNode(word);
    nodeAddr->next = *root;
    *root = nodeAddr;
    
}

char *pop(SNode **root)
{
    if (isEmpty(*root))
        return NULL;
    SNode *topNode = *root;
    *root = (*root)->next;
    char *popped = topNode->word;
    free(topNode);
    return popped;
}

int main()
{
    SNode *root = NULL;
    
    push(&root, "the");
    push(&root, "lazy");
    push(&root, "dog");
    push(&root, "jumped");
    push(&root, "over");
    push(&root, "the");
    push(&root, "quick");
    push(&root, "brown");
    push(&root, "fox");
    
    char *popValue;
    
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    popValue = pop(&root);
    printf("%s ", popValue);
    return 0;
}
