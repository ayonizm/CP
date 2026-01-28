#include <stdio.h>
#include <stdlib.h>

#define MAX_N 2000

int compare(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

int compare_order(const void *a, const void *b)
{
    return (*(int *)a - *(int *)b);
}

void solve()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, m;
        scanf("%d %d", &n, &m);

        int cards[MAX_N][MAX_N];
        int smallest[MAX_N], order[MAX_N];

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &cards[i][j]);
            }
            qsort(cards[i], m, sizeof(int), compare);
            smallest[i] = cards[i][0];
            order[i] = i + 1;
        }

        int indices[MAX_N];
        for (int i = 0; i < n; i++)
            indices[i] = i;
        qsort(indices, n, sizeof(int), compare_order);

        int pile = -1;
        int valid = 1;

        for (int r = 0; r < m && valid; r++)
        {
            for (int i = 0; i < n && valid; i++)
            {
                int cow = indices[i];
                int played = 0;
                for (int j = 0; j < m; j++)
                {
                    if (cards[cow][j] > pile)
                    {
                        pile = cards[cow][j];
                        cards[cow][j] = -1;
                        played = 1;
                        break;
                    }
                }
                if (!played)
                    valid = 0;
            }
        }

        if (valid)
        {
            for (int i = 0; i < n; i++)
            {
                printf("%d ", order[indices[i]]);
            }
            printf("\n");
        }
        else
        {
            printf("-1\n");
        }
    }
}

int main()
{
    solve();
    return 0;
}
