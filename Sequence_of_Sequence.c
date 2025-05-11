#include <stdio.h>
int main()
{
    int x;

    while (scanf("%d", &x) != EOF)
    {

        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < i; j++)
            {
                printf("%d ", i);
            }
        }
        
    }

    return 0;
}

