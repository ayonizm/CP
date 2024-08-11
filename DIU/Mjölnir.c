#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    char name[100];
    int x;

    for (int i = 0; i < n; i++)
    {
        int count = 0;
        fgets(name, 100, stdin);
        scanf("%d", &x);
        
        if (name[0] == 'T' && name[1] == 'h' && name[2] == 'o' && name[3] == 'r')
        {
            printf("Y\n");
        }
        else
        {
            printf("N\n");
        }
    }

    return 0;
}