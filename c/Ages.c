#include <stdio.h>
int main()
{
    int x;
    int sum = 0;
    float count = 0;
    while (scanf("%d", &x) != EOF)
    {
        if (x < 0)
        {
            break;
        }
        count++;
        sum = sum + x;
    }
    float tot = sum / count;
    printf("%.2f\n", tot);
    return 0;
}