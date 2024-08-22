// #include <stdio.h>

// int main()
// {
//     int x, y;
//     while (scanf("%d %d", &x, &y) != EOF)
//     {
//         if (x == 0 && y == 0)
//         {
//             break;
//         }

//         int ar[y];
//         int big = 0;
//         int sum = 0;

//         for (int i = 0; i < y; i++)
//         {
//             char name[100];
//             scanf("%s", name);
//             scanf("%d", &ar[i]);

//             if (ar[i] > big)
//             {
//                 big = ar[i];
//             }

//             sum += ar[i];
//         }

//         int rem;
//         if (big != 0)
//         {
//             rem = sum % big;
//         }
//         else
//         {
//             rem = 0;
//         }

//         printf("%d\n", rem);
//     }

//     return 0;
// }

#include <stdio.h>

int main()
{
    int T, N;
    while (scanf("%d %d", &T, &N) == 2 && T != 0)
    {
        int totalPoints = 3 * N;
        int matchDraw = 0;

        for (int i = 0; i < T; i++)
        {
            char str[100];
            int point;
            scanf("%s %d", str, &point);
            matchDraw += point;
        }

        printf("%d\n", totalPoints - matchDraw);
    }

    return 0;
}
