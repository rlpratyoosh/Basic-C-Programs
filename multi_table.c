#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, i;
    printf("Enter the required number:\n");
    scanf("%d", &a);
    for ( i = 1; i < 11; i++)
    {
        printf("%d * %d = %d\n", a, i, a*i);
    }
    
    return 0;
}
