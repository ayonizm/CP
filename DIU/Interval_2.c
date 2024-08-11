#include <stdio.h>
int main()
{
    int x;
    int in = 0, out = 0;
    scanf("%d", &x);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < x; i++)
    {
        if (ar[i] >= 10 && ar[i] <= 20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }
    printf("%d in\n", in);
    printf("%d out\n", out);

    return 0;
}