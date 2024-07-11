#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Create Rock Paper Scisior game.
1. Rock
2. Paper
3. Scisior
*/

int random(int n)
{
    srand(time(NULL));
    return rand() % n+1;
}

int main()
{
    int input, pointu = 0, pointc = 0;
    printf("WELCOME TO ROCK, PAPER AND SCISSIOR\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Round %d...\n", i+1);
        printf("Choose:\n1.Rock\n2.Paper\n3.Scissior\n");
        scanf("%d", &input);
        int computer_input = random(3);
        printf("The computer chooses %d\n", computer_input);
        if (input == computer_input)
        {
            printf("It is a tie\n");
            pointu += 0.5;
            pointc += 0.5;
        }
        else if (input == 1 && computer_input == 2)
        {
            printf("Computer won the round\n");
            pointc += 1;
        }
        else if (input == 1 && computer_input == 3)
        {
            printf("User won the round\n");
            pointu += 1;
        }
        else if (input == 2 && computer_input == 1)
        {
            printf("User won the round\n");
            pointu += 1;
        }
        else if (input == 2 && computer_input == 3)
        {
            printf("Computer won the round\n");
            pointc += 1;
        }
        else if (input == 3 && computer_input == 1)
        {
            printf("Computer won the round\n");
            pointc += 1;
        }
        else if (input == 3 && computer_input == 2)
        {
            printf("User won the round\n");
            pointu += 1;
        }
    }
    if (pointc == pointu)
    {
        printf("The game was a tie.\n");
    }
    else if (pointc > pointu)
    {
        printf("Computer won the game.\n");
    }
    else if (pointc < pointu)
    {
        printf("User won the game.\n");
    }
    return 0;
}