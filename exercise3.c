#include <stdio.h>

//Fibonacci Number, 0, 1, 1, 2, 3, 5, 8, ......

int fibonacci(int num)
{
    if (num == 0 || num == 1)
    {
        return num;
    }
    else
    {
        return fibonacci(num-1) + fibonacci (num-2);
    }
    
}

int main(int argc, char const *argv[])
{
    int a;
    printf("Enter the number:\n");
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        printf("%d ", fibonacci(i));
    }
    
    return 0;
}
