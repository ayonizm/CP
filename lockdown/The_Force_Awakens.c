#include <stdio.h>
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }
    int yo;
    int flag = 0;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (ar[i][j] == 42)
            {
                yo = ar[i - 1][j - 1];
            }

            if (ar[i - 1][j - 1] == yo && ar[i - 1][j] == yo && ar[i - 1][j + 1] == yo && ar[i][j - 1] == yo && ar[i][j + 1] == yo && ar[i + 1][j - 1] == yo && ar[i + 1][j] == yo && ar[i + 1][j + 1])
            {
                printf("%d %d\n", i + 1, j + 1);
            }
            else if (ar[i - 1][j - 1] != yo || ar[i - 1][j] != yo || ar[i - 1][j + 1] != yo || ar[i][j - 1] != yo || ar[i][j + 1] != yo || ar[i + 1][j - 1] != yo || ar[i + 1][j] != yo || ar[i + 1][j + 1])
            {
                flag++;
            }
        }
    }
    if (flag == (a * b))
    {
        printf("0 0\n");
    }

    return 0;
}