#include <stdio.h>
#include <string.h>

void parser(char *s)
{
    int inside = 0, index = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] == '<')
        {
            inside = 1;
            continue;
        }
        else if (s[i] == '>')
        {
            inside = 0;
            continue;
        }
        if (inside == 0)
        {
            s[index] = s[i];
            index++;
        }
    }
    s[index] = '\0';
    while (s[0] == ' ')
    {
        for (int i = 0; i < strlen(s); i++)
        {
            s[i] = s[i+1];
        }
    }
    while (s[strlen(s)-1] == ' ')   
    {
        s[strlen(s)-1] = '\0';
    }
    
}

int main()
{
    char sentence[50];
    printf("Please enter the sentence:\n");
    fgets(sentence, sizeof(sentence), stdin);
    sentence[strcspn(sentence, "\n")] = '\0';
    parser(sentence);
    printf("The parsed sentense is \"%s\" ", sentence);
    return 0;
}