#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int p = n;
    int q = n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j >= 0; j--)
        {
            printf("%d ", q);
            q++;
        }
        printf("\n");
        p--;
        q = p;
    }
}