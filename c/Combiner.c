#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        char a[52], b[52];
        scanf("%s", &a);
        scanf("%s", &b);
        int len_a = strlen(a);
        int len_b = strlen(b);
        int small;
        int nida;
        if (len_a > len_b)
        {
            small = len_b;
            nida = 0;
        }
        else if (len_b > len_a)
        {
            small = len_a;
            nida = 1;
        }
        // 0 a boro ,1 b boro
        else
        {
            small = len_a;
        }
        int wow = len_a + len_b;
        char name[wow + 1];
        int ayon = 0;
        for (int j = 0; j < small; j++)
        {
            name[ayon++] = a[j];
            name[ayon++] = b[j];
        }
        if (len_a > len_b)
        {
            strcpy(&name[ayon], &a[small]);
        }
        else
        {
            strcpy(&name[ayon], &b[small]);
        }

        printf("%s\n", name);
    }

    return 0;
}