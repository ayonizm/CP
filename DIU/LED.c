#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    char name[1001];

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        scanf("%s", &name);
        int x = strlen(name);
        for (int j = 0; j < x; j++)
        {
            if (name[j] == '0')
            {
                count = count + 6;
            }
            else if (name[j] == '1')
            {
                count = count + 2;
            }
            else if (name[j] == '2')
            {
                count = count + 5;
            }
            else if (name[j] == '3')
            {
                count = count + 5;
            }
            else if (name[j] == '4')
            {
                count = count + 4;
            }
            else if (name[j] == '5')
            {
                count = count + 5;
            }
            else if (name[j] == '6')
            {
                count = count + 6;
            }
            else if (name[j] == '7')
            {
                count = count + 3;
            }
            else if (name[j] == '8')
            {
                count = count + 7;
            }
            else if (name[j] == '9')
            {
                count = count + 6;
            }
        }
        printf("%d leds\n", count);
    }

    return 0;
}