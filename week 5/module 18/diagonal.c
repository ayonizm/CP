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
    int count1 = 0;
    int count2 = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
          if (i==j)
          {
            count1 = count1 + a[i][j];
          }
          if (i+j==row-1)
          {
            count2 = count2 + a[i][j];
          }
          
           
        }
        
    }
    int ans = count1 - count2;
    if (ans>0)
    {
        printf("%d",ans);
    }
    else{
        printf("%d",ans*-1);
    }
    
    
    return 0;
}