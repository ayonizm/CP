#include <stdio.h>
#include <string.h>

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    for (int j = 0; j < n; j++)
    {
        char x[1001];
        char y[1001];
        scanf("%s", x);
        scanf("%s", y);

        int x_len = strlen(x);
        int y_len = strlen(y);

        if (x_len >= y_len)
        {

            if (strcmp(x + x_len - y_len, y) == 0)
            {
                printf("encaixa\n");
            }
            else
            {
                printf("nao encaixa\n");
            }
        }
        else
        {

            printf("nao encaixa\n");
        }
    }

    return 0;
}
