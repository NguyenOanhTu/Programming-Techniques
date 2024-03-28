#include <stdlib.h>
#include <stdio.h>
#include <string.h>
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
struct Word {
	char w[10];
};
void getWord(char *text, int low, int high, struct Word (&listWord)[100], int & listWordSize)
{
	// Add word to listWords
	for (int i = low; i <= high; i++)
	{
		listWord[listWordSize].w[i - low] = text[i];
	}
	
	// Increase size of listWords
	listWordSize++;
}
void separateWord(char *text, struct Word (&listWord)[100], int & listWordSize)
{
    // `text[low…high]` forms a word
    int low = 0, high = 0;
    // scan the text
    int n = strlen(text);
    for (int i = 0; i < n; i++)
    {
        // if space is found, we found a word
        if (text[i] == ' ')
        {
            // reverse the found word
            getWord(text, low, high, listWord, listWordSize);
 
            // reset `low` and `high` for the next word
            low = high = i + 1;
        }
        else {
            high = i;
        }
    }
    // reverse the last word
    getWord(text, low, high, listWord, listWordSize);
}
    int main()
    {
        SNode *root = NULL;
        char * stringWord = "The lazy dog jumped over the quick brown for"; 
        struct Word listWord[100] = {0};
		int listWordSize = 0;
		
		separateWord(stringWord, listWord, listWordSize);
		
		for (int i = 0; i < listWordSize  ; i++)
		{
			push(&root, listWord[i].w);
		}
		
		for (int i = 0; i < listWordSize; i++)
		{
			printf("%s ", pop(&root));
		}
		return 0;
    }
