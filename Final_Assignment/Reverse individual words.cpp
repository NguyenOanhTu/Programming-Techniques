#include <stdio.h>
#include <string.h>
 
// Utility function to swap the characters at position `i` and `j`
void swap(char *arr, int i, int j)
{
    char ch = arr[i];
    arr[i] = arr[j];
    arr[j] = ch;
}
 
// Utility function to reverse subarray `text[begin…end]`
void reverseText(char *text, int begin, int end)
{
    while (begin < end) {
        swap(text, begin++, end--);
    }
}
 
// Function to reverse a text without reversing the individual words.
void reverse_text(char *text)
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
            reverseText(text, low, high);
 
            // reset `low` and `high` for the next word
            low = high = i + 1;
        }
        else {
            high = i;
        }
    }
 
    // reverse the last word
    reverseText(text, low, high);
 
    // reverse the whole text
    reverseText(text, 0, n - 1);
}
 
int main(void)
{
    char text[] = "Preparation Interview Technical";
 
    reverse_text(text);
    printf("%s", text);
 
    return 0;
}
