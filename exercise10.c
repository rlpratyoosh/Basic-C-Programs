#include <stdio.h>
#include <stdlib.h>

/*
Matrix multiplication
1 2    3 2
3 4    7 0

00 01  00 01
10 11  10 11

00*00 + 01*10   00*01 + 01*11
10*00 + 11*10   10*01 + 11*11

*/

int main()
{
    int rowsa, colsa, rowsb, colsb;
    printf("For first Matrix...\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &rowsa);
    printf("Enter the number of columns:\n");
    scanf("%d", &colsa);

    int **a = (int **)malloc(rowsa * sizeof(int *));
    for (int i = 0; i < rowsa; i++)
    {
        a[i] = (int *)malloc(colsa * sizeof(int));
    }

    printf("Enter the elements of first matrix:\n");
    for (int i = 0; i < rowsa; i++)
    {
        for (int j = 0; j < colsa; j++)
        {
            printf("Element for place %d%d\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For second Matrix...\n");
    printf("Enter the number of rows:\n");
    scanf("%d", &rowsb);
    printf("Enter the number of columns:\n");
    scanf("%d", &colsb);

    int **b = (int **)malloc(rowsb * sizeof(int *));
    for (int i = 0; i < rowsb; i++)
    {
        b[i] = (int *)malloc(colsb * sizeof(int));
    }

    printf("Enter the elements of second matrix:\n");
    for (int i = 0; i < rowsb; i++)
    {
        for (int j = 0; j < colsb; j++)
        {
            printf("Element for place %d%d\n", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    printf("First matrix:\n");
    for (int i = 0; i < rowsa; i++)
    {
        for (int j = 0; j < colsa; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    printf("Second matrix:\n");
    for (int i = 0; i < rowsb; i++)
    {
        for (int j = 0; j < colsb; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    if (colsa != rowsb)
    {
        printf("Multiplication is not possible\nEnding...");
        free(a);
        free(b);
    }

    else
    {
        int **product = (int **)malloc(rowsa * sizeof(int));
        for (int i = 0; i < rowsa; i++)
        {
            product[i] = (int *)malloc(colsb * sizeof(int));
        }
        for (int i = 0; i < rowsa; i++)
        {
            for (int j = 0; j < colsb; j++)
            {
                product[i][j] = 0;
                for (int k = 0; k < colsa; k++)
                {
                    product[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        printf("Multiplication of both matrices gives the matrix:\n");
        for (int i = 0; i < rowsa; i++)
        {
            for (int j = 0; j < colsb; j++)
            {
                printf("%d ", product[i][j]);
            }
            printf("\n");
        }
        free(a);
        free(b);
        free(product);
    }

    return 0;
}