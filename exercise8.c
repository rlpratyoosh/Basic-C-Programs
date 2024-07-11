#include <stdio.h>
#include <stdlib.h>

/*
Dynamic memory allocation:
ABC Pvt Ltd, manages employee records of other companies.
Employee id can be of any length and it can contain any character.
You have to take the lenght of the id as an input.
For 3 employees you have to take employee id as an input and display it on screen.
Store the employee id in a character array which is allocated dynamically.
*/

int main()
{
    int n;
    char *id;
    for (int i = 0; i < 3; i++)
    {
        printf("Employee %d:\nEnter the length of your employee id:\n", i+1);
        scanf("%d", &n);
        id = (char*)malloc(n+1 /*String has a null character at the end*/ * sizeof(char));
        printf("Enter your employee id:\n");
        scanf("%s", id);
        printf("Your employee id is:\n");
        printf("%s\n", id);
        printf("\n");
        free(id);
    }
    
    return 0;
}