#include <stdio.h>

/*
Palindrome - Palindrome is a string which if reversed remains the same
Take a number as input and check if it is a palindrome
*/

int isPalindrome(int num)
{
    int revnum = 0, orignum = num;
    while (num > 0)
    {
        int r = num % 10;
        revnum = revnum * 10 + r;
        num /= 10;
    } // Reversed the number

    if (orignum == revnum)
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
    int num;
    printf("Enter the number:\n");
    scanf("%d", &num);
    if (isPalindrome(num))
    {
        printf("It is a palindrome number\n");
    }
    else
    {
        printf("It is not a palindrome number\n");
    }
    return 0;
}