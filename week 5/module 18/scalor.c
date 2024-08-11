#include <stdio.h>
int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    // int cor = a[0][0];
    int flag = 0;
    if (row != col)
    {
        flag = 1;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i != j && a[i][j] != 0)
            {
                flag = 1;
                break;
            }
            if (i == j && a[i][j] != 1)
            {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        printf("unit\n");
    }
    else if (flag==1)
    {
        printf("not unit\n");
    }
    
    

    return 0;
}