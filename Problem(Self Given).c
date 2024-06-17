/*
A program to ask students their class, and if they passed in Physics, Chemistrty and Maths
If they passed all the three subjects the 12th students will recieve 60$
If they passed all the three subjects the students of class 11th students will recieve 50$
If they passed two subjects the 12th students will recieve 40$
If they passed two subjects the students of class 11th students will recieve 30$
If they passed only one subject the 12th students will recieve 15$
If they passed only one subject the students of class 11th students will recieve 10$
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int class;
    char phy, chem, math;
    printf("Which class do you study in?\n");
    scanf("%d", &class);
    printf("Did you pass in Physics?(y/n)\n");
    scanf(" %c", &phy);
    printf("Did you pass in Chemistry?(y/n)\n");
    scanf(" %c", &chem);
    printf("Did you pass in Maths?(y/n)\n");
    scanf(" %c", &math);

    switch (class)
    {
    case 12:
        if (phy == 'y' && chem == 'y' && math == 'y')
        {
            printf("Congrats!! You will recieve 60$");
        }
        else if (phy == 'y' && chem == 'y' || chem == 'y' && math == 'y' || phy == 'y' && math == 'y')
        {
            printf("Congrats!! You will recieve 40$");
        }
        else if (phy == 'y' || chem == 'y' || math == 'y')
        {
            printf("Congrats!! You will recieve 15$");
        }
        else
        {
            printf("Sorry, better luck next year!!");
        }

        break;

    case 11:
        if (phy == 'y' && chem == 'y' && math == 'y')
        {
            printf("Congrats!! You will recieve 50$");
        }
        else if (phy == 'y' && chem == 'y' || chem == 'y' && math == 'y' || phy == 'y' && math == 'y')
        {
            printf("Congrats!! You will recieve 30$");
        }
        else if (phy == 'y' || chem == 'y' || math == 'y')
        {
            printf("Congrats!! You will recieve 10$");
        }
        else
        {
            printf("Sorry, better luck next year!!");
        }

        break;

    default:
        printf("You are not eligible for the prize money.");
        break;
    }
    return 0;
}
