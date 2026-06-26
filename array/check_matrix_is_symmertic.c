#include<stdio.h>

int main()
{
    int row, col;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    
    if(row != col)
    {
        printf("Matrix is Not Symmetric.");
        return 0;
    }

    int arr[row][col];

    printf("Enter matrix elements:\n");

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int flag = 1;

    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] != arr[j][i])
            {
                flag = 0;
                break;
            }
        }

        if(flag == 0)
            break;
    }

    if(flag == 1)
        printf("Matrix is Symmetric.");
    else
        printf("Matrix is Not Symmetric.");

    return 0;
}