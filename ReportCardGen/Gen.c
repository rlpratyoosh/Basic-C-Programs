#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *wordReplace(const char *string, const char *oldWord, const char *newWord)
{
    int i, count = 0;
    char *newString;
    int newWordlen = strlen(newWord);
    int oldWordlen = strlen(oldWord);
    // Count the number of old words in the string
    for (i = 0; string[i] != '\0'; i++)
    {
        if (strstr(&string[i], oldWord) == &string[i])
        {
            count++;
            i += oldWordlen - 1;
        }
    }
    // Allocating the memory to new string
    newString = (char *)malloc(i + count * (newWordlen - oldWordlen));
    if (newString == NULL)
    {
        printf("Memory allocation failed.\n");
    }
    i = 0;
    // Replace the word
    while (*string)
    {
        if (strstr(string, oldWord) == string)
        {
            strcpy(&newString[i], newWord);
            i += newWordlen;
            string += oldWordlen;
        }
        else
        {
            newString[i] = *string;
            i++;
            string++;
        }
    }
    newString[i] = '\0';
    return newString;
}

int main()
{
    char content[300];
    char buffer[sizeof(content)];
    FILE *format = NULL;
    char *newContent;
    FILE *ReportCard = NULL;
    format = fopen("format.txt", "r");
    while (fgets(buffer, sizeof(buffer), format) != NULL)
    {
        strcat(content, buffer);
    }
    fclose(format);
    // printf("%s", content);
    ReportCard = fopen("reportcard.txt", "a");
    // Take input of the words
    for (;;)
    {
        char name[20], id[10], reply;
        int imarks1, imarks2, imarks3, itotal, iaverage;
        char cmarks1[10], cmarks2[10], cmarks3[10], ctotal[10], caverage[10];
        printf("Enter the name of the student:\n");
        scanf("%s", name);
        printf("Enter the roll of the student:\n");
        scanf("%s", id);
        printf("Enter the marks of subject 1:\n");
        scanf("%d", &imarks1);
        printf("Enter the marks of subject 2:\n");
        scanf("%d", &imarks2);
        printf("Enter the marks of subject 3:\n");
        scanf("%d", &imarks3);
        itotal = imarks1 + imarks2 + imarks3;
        iaverage = itotal / 3;
        sprintf(cmarks1, "%d", imarks1);
        sprintf(cmarks2, "%d", imarks2);
        sprintf(cmarks3, "%d", imarks3);
        sprintf(ctotal, "%d", itotal);
        sprintf(caverage, "%d", iaverage);
        // Replace the words
        newContent = wordReplace(content, "{name}", name);
        newContent = wordReplace(newContent, "{id}", id);
        newContent = wordReplace(newContent, "{Marks1}", cmarks1);
        newContent = wordReplace(newContent, "{Marks2}", cmarks2);
        newContent = wordReplace(newContent, "{Marks3}", cmarks3);
        newContent = wordReplace(newContent, "{Total}", ctotal);
        newContent = wordReplace(newContent, "{Average}", caverage);
        printf("Report Card:\n%s\n", newContent);
        fprintf(ReportCard, "%s\n", newContent);
        free(newContent);
        printf("Do you want to add more students?(y/n)\n");
        scanf(" %c", &reply);
        if (reply == 'y' || reply == 'Y')
        {
            continue;
        }
        else if (reply == 'n' || reply == 'N')
        {
            break;
        }
        else
        {
            printf("Wrong input");
            break;
        }
        
    }

    fclose(ReportCard);

    return 0;
}