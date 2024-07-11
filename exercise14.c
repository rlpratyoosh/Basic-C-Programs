/*
Find the euclidian distance
Then find the area of the circle whose radius is equal to the euclidian distance
*/

#include <stdio.h>
#include <math.h>
#define pi 3.14

double eDistance(int x1, int x2, int y1, int y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    // Sqrt is a syntax from math.h library and is used to find Square roots
    // Pow is another syntax from math.h library and is used as power of the given number
}

double areaOfTheCircle(int x1, int x2, int y1, int y2, double (*fptr)(int, int, int, int))
{
    return pi * pow(fptr(x1, x2, y1, y2), 2);
}

int main()
{
    int x1, x2, y1, y2;
    printf("Enter the value of x1:\n");
    scanf("%d", &x1);
    printf("Enter the value of x2:\n");
    scanf("%d", &x2);
    printf("Enter the value of y1:\n");
    scanf("%d", &y1);
    printf("Enter the value of y2:\n");
    scanf("%d", &y2);
    double (*fptr)(int, int, int, int);
    fptr = eDistance;
    double area = areaOfTheCircle(x1, x2, y1, y2, fptr);
    printf("Area of the circle is %.2f\n", area);

    return 0;
}