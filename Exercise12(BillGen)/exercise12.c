#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
You have to fill in values to a template letter.txt
It looks like:
Thanks {{name}} for purchasing {{Item}} from out outlet {{outlet}}.
Please visit out {{outlet}} for any kind of problem.
We plan to serve you again soon.

You have to read this file and replace these values:
Name, Item, Outlet
*/

char * replaceWord(const char *str, const char *oldWord, const char *newWord)
{
    char *resultstring;
    int oldWordLength, newWordlength, i, count = 0;
    oldWordLength = strlen(oldWord);
    newWordlength = strlen(newWord);

    // To count the number of occurences of the old word
    for (i = 0; str[i] != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i += oldWordLength - 1;
        }
    }
    // Allocating the memory required for new word to the new string
    resultstring = (char *)malloc(i + count * (newWordlength - oldWordLength) + 1);

    i = 0;
    // Replacing the word
    while (*str)
    {
        if (strstr(str, oldWord) == str)
        {
            strcpy(&resultstring[i], newWord);
            i += newWordlength;
            str += oldWordLength;
        }
        else
        {
            resultstring[i] = *str;
            i++;
            str++;
        }
    }
    resultstring[i] = '\0';
    return resultstring;
}

int main()
{
    FILE *bill = NULL;
    FILE *billgen = NULL;
    char content[200];
    char *newcontent;
    bill = fopen("Bill.txt", "r");
    fgets(content, 200, bill);
    printf("The actual bill generated is: %s\n", content);
    billgen = fopen("Billgen.txt", "a");
    //Take input of the words
    char name[20];
    char item[20];
    printf("Enter the customer's name:\n");
    scanf("%s", name);
    printf("Enter the item:\n");
    scanf("%s", item);
    // Replace the words
    newcontent = replaceWord(content, "{{name}}", name);
    newcontent = replaceWord(newcontent, "{{item}}", item);
    newcontent = replaceWord(newcontent, "{{outlet}}", "Raj Laxmi Fan Outlet");
    printf("Generated bill:\n%s", newcontent);

    fprintf(billgen, "%s\n", newcontent);
    fclose(bill);
    fclose(billgen);
    return 0;
}