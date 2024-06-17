// Program to convert Celcius to Fahrenheit or Fahrenheit to Celcius

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int i;
    float f, c;
    char type;
    for (;;)
    {
        printf("What do you want to convert(f/c)\n");
        scanf(" %c", &type);
        if (type == 'c')
        {
            printf("What is its value in degrees?\n");
            scanf("%f", &c);
            printf("Value you provided is: %fC\n", c);
            printf("In Fahrenheit it is %fF", (c * 9 / 5) + 32);
            break;
        }
        else if (type == 'f')
        {
            printf("What is its value in degrees?\n");
            scanf("%f", &f);
            printf("Value you provided is: %fF\n", f);
            printf("In Celcius it is %fC", (f - 32) * 5 / 9);
            break;
        }
        else
        {
            printf("Provide correct data (It is case sensitive), Reply only in (f/c) format\n");
            continue;
        }
    }

    return 0;
}
