#include <stdio.h>
#define MAX_SIZE 100 // maximum size of the matrices

int main()
{
    int matrix1[MAX_SIZE][MAX_SIZE], matrix2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int i, j, k, rows1, cols1, rows2, cols2;

    printf("Enter the number of rows and columns of matrix1: ");
    scanf("%d %d", &rows1, &cols1);

    printf("Enter the elements of matrix1:\n");
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols1; j++)
        {
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the number of rows and columns of matrix2: ");
    scanf("%d %d", &rows2, &cols2);

    if(cols1 != rows2)
    {
        printf("Matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter the elements of matrix2:\n");
    for(i=0; i<rows2; i++)
    {
        for(j=0; j<cols2; j++)
        {
            scanf("%d", &matrix2[i][j]);
        }
    }

    // multiply the matrices
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols2; j++)
        {
            result[i][j] = 0;
            for(k=0; k<cols1; k++)
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    // display the result matrix
    printf("Resultant matrix:\n");
    for(i=0; i<rows1; i++)
    {
        for(j=0; j<cols2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}

