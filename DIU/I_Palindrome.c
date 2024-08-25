#include <stdio.h>
#include <string.h>
int main()
{
    int no = 0;
    char x[1001];
    scanf("%s", &x);
    int len = strlen(x);

    for (int i = 0; i < len / 2; i++)
    {
        if (x[i] == x[len - i - 1])
        {
        }
        else
        {
            no++;
        }
    }
    if (no == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}