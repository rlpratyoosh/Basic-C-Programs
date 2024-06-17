//Fibonacci number 0, 1, 1, 2, 3, 5, 8.....

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x = 0;
    int y = 1;
    int z;
    int num;
    printf("Enter the number till which you want the fibonacci number:\n");
    scanf("%d", &num);
    printf("The required fibonacci number is, %d, %d,", x, y);
    for (int i = 2; i < num; i++)
    {
        z = x + y;
        printf(" %d,", z);
        x = y;
        y = z;
    }
    
    return 0;
}
