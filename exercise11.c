#include <stdio.h>

/*
Palindrome - Palindrome is a string which if reversed remains the same
Take a number as input and check if it is a palindrome
*/

int exponent(int num, int a)
{
    int b = 1;
    for (int i = 0; i < a; i++)
    {
        b *= num;
    }
    return b;
}

int isPalindrome(int num)
{
    while (num > 0)
    {
        int d2, d1 = num, count = 0;
        d2 = num % 10;
        while (d1 > 10)
        {
            d1 /= 10;
            count += 1;
        }
        if(d1 != d2)
        {
            return 0;
        }
        num -= d1*exponent(10, count);
        num /= 10;
    }

    return 1;
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