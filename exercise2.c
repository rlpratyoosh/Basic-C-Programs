/*
1. kms to miles and vice versa
2. inches to foot and vice versa
3. centimeter to inches and vice versa
4. pound to kgs and vice versa
5. inches to meters and vice versa
*/

#include <stdio.h>

void first()
{
    char type;
    int i = 0;
    while (!i)
    {
        printf("What do you want to convert kilometers or miles (k/m)\n");
        scanf(" %c", &type);
        if (type == 'k' || type == 'K')
        {
            int k;
            printf("Enter the value:\n");
            scanf("%d", &k);
            printf("%d kilometers in miles is %f\n", k, k / 1.609);
            i = 1;
        }
        else if (type == 'm' || type == 'M')
        {
            int m;
            printf("Enter the value:\n");
            scanf("%d", &m);
            printf("%d miles in kilometers is %f\n", m, m * 1.609);
            i = 1;
        }
        else
        {
            printf("Please provide the correct data..\n");
        }
    }
}

void second()
{
    char type;
    int i = 0;
    while (!i)
    {
        printf("What do you want to convert inch or foot (i/f)\n");
        scanf(" %c", &type);
        if (type == 'i' || type == 'I')
        {
            int i;
            printf("Enter the value:\n");
            scanf("%d", &i);
            printf("%d inches in foot is %d\n", i, i / 12);
            i = 1;
        }
        else if (type == 'f' || type == 'F')
        {
            int f;
            printf("Enter the value:\n");
            scanf("%d", &f);
            printf("%d foot in inches is %d\n", f, f * 12);
            i = 1;
        }
        else
        {
            printf("Please provide the correct data...\n");
        }
    }
}

void third()
{
    char type;
    int i = 0;
    while (!i)
    {
        printf("What do you want to convert centimeter or inches (c/i)\n");
        scanf(" %c", &type);
        if (type == 'c' || type == 'C')
        {
            int c;
            printf("Enter the value:\n");
            scanf("%d", &c);
            printf("%d centimeters in inches is %f\n", c, c / 2.54);
            i = 1;
        }
        else if (type == 'i' || type == 'I')
        {
            int i;
            printf("Enter the value:\n");
            scanf("%d", &i);
            printf("%d inches in centimeters is %f\n", i, i * 2.54);
            i = 1;
        }
        else
        {
            printf("Please provide the correct data...\n");
        }
    }
}

void fourth()
{
    char type;
    int i = 0;
    while (!i)
    {
        printf("What do you want to convert pound or kg (p/k)\n");
        scanf(" %c", &type);
        if (type == 'p' || type == 'P')
        {
            int p;
            printf("Enter the value:\n");
            scanf("%d", &p);
            printf("%d pound in kilograms is %f\n", p, p / 2.205);
            i = 1;
        }
        else if (type == 'k' || type == 'K')
        {
            int k;
            printf("Enter the value:\n");
            scanf("%d", &k);
            printf("%d kilograms in pounds is %f\n", k, k * 2.205);
            i = 1;
        }
        else
        {
            printf("Please provide the correct data...\n");
        }
    }
}

void fifth()
{
    char type;
    int i = 0;
    while (!i)
    {
        printf("What do you want to convert inches or meters (i/m)\n");
        scanf(" %c", &type);
        if (type == 'i' || type == 'I')
        {
            int i;
            printf("Enter the value:\n");
            scanf("%d", &i);
            printf("%d inches in meters is %f\n", i, i / 39.37);
            i = 1;
        }
        else if (type == 'm' || type == 'M')
        {
            int m;
            printf("Enter the value:\n");
            scanf("%d", &m);
            printf("%d meters in inches is %f\n", m, m * 39.37);
            i = 1;
        }
        else
        {
            printf("Please provide the correct data...\n");
        }
    }
}

int main(int argc, char const *argv[])
{
start:
    for (;;)
    {
        int function;
        printf("What do you want to convert?\n1. kms to miles and vice versa\n2. inches to foot and vice versa\n");
        printf("3. centimeter to inches and vice versa\n4. pound to kgs and vice versa\n5. inches to meters and vice versa\n");
        printf("Or press 0 to exit\n");
        scanf("%d", &function);
        if (function == 1)
        {
            first();
        }

        else if (function == 2)
        {
            second();
        }

        else if (function == 3)
        {
            third();
        }

        else if (function == 4)
        {
            fourth();
        }

        else if (function == 5)
        {
            fifth();
        }

        else if (function == 0)
        {
            printf("Ending...\n");
            break;
        }

        else
        {
            printf("Please provide the correct number\n\n");
            goto start;
        }

        char question;
        printf("\nDo you want to continue(y/n)\n");
        scanf(" %c", &question);
        if (question == 'y' || question == 'Y')
        {
            printf("Continuing...\n");
            goto start;
        }
        else if (question == 'n' || question == 'N')
        {
            printf("Ending...");
            break;
        }
    }
    return 0;
}
