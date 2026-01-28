#include <stdio.h>
#include <string.h>
void fun(int x)
{
    if (x == 0)
    {
        return;
    }

    int n = x % 10;
    fun(x / 10);
    printf("%d ", n);
}
int main()
{
    int num;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        int hey;
        scanf("%d", &hey);
        fun(hey);
        if (hey == 0)
        {
            printf("0");
        }

        printf("\n");
    }

    return 0;
}