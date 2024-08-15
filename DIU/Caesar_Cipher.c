#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int i = 0; i < n; i++)
    {
        char name[52];
        scanf("%s", &name);
        int x = strlen(name);
        int num;
        scanf("%d", &num);
        for (int j = 0; j < x; j++)
        {
            int temp = name[j] - num;
            if (temp >= 'A' && temp <= 'Z')
            {
                printf("%c", name[j] - num);
            }
            else
            {
                int temp1 = num - (name[j] - 'A');
                int temp2 = 'Z' - temp1 + 1;

                printf("%c", temp2);
            }
        }
        printf("\n");
    }

    return 0;
}