#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        char name[x + 1];
        scanf("%s", name);
        int countT = 0;
        int countP = 0;
        for (int j = 0; j < x; j++)
        {
            if (name[j] == 'T')
            {
                countT++;
            }
            else if (name[j] == 'P')
            {
                countP++;
            }
        }
        if (countP > countT)
        {
            printf("Pathaan\n");
        }
        else if (countP < countT)
        {
            printf("Tiger\n");
        }
        else
        {
            printf("Draw\n");
        }
    }

    return 0;
}