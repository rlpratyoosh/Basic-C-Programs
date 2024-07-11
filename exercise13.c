#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%d %s\n", i, argv[i]);
    }

    if (strcmp(argv[1], "add") == 0)
    {
        float a, b, sum;
        a = atof(argv[2]);
        b = atof(argv[3]);
        sum = a + b;
        printf("The sum of the two numbers is: %.2f\n", sum);
    }
    else if (strcmp(argv[1], "subtract") == 0)
    {
        float a, b, sub;
        a = atof(argv[2]);
        b = atof(argv[3]);
        sub = a - b;
        printf("The difference of the two numbers is: %.2f\n", sub);
    }
    else if (strcmp(argv[1], "multiply") == 0)
    {
        float a, b, product;
        a = atof(argv[2]);
        b = atof(argv[3]);
        product = a * b;
        printf("The product of the two numbers is: %.2f\n", product);
    }
    else if (strcmp(argv[1], "devide") == 0)
    {
        float a, b, quotient;
        a = atof(argv[2]);
        b = atof(argv[3]);
        quotient = a / b;
        printf("The quotient of the two numbers is: %.2f\n", quotient);
    }
    else
    {
        printf("Wrong command line arguement\n");
    }

    return 0;
}