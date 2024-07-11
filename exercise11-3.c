#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isPalindrome(char word[10])
{
    char originword[10];
    strcpy(originword, word);
    // Reverse the word
    int n = strlen(word);
    for (int i = 0; i < n / 2; i++)
    {
        char temp = word[i];
        word[i] = word[n - 1 - i];
        word[n - 1 - i] = temp;
    }
    printf("Reversed word is %s\n", word);
    if (strcmp(word, originword) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    char word[10];
    printf("Enter a word (All small or all capital):\n");
    scanf("%s", word);
    if (isPalindrome(word))
    {
        printf("The word is a Palindrome word.\n");
    }
    else
    {
        printf("The word is not a palindrome word.\n");
    }

    return 0;
}