// #include <stdio.h>
// int main()
// {
//     int n;
//     scanf("%d", &n);
//     for (int i = 0; i < n; i++)
//     {
//         int ar[10];
//         for (int i = 0; i < 10; i++)
//         {
//             scanf("%d", &ar[i]);
//         }
//         int pointx1 = ar[0];
//         int pointx2 = ar[0];
//         int pointy1 = ar[1];
//         int pointy2 = ar[1];
//         for (int i = 0; i < 8; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (ar[i] < pointx1)
//                 {
//                     pointx1 = ar[i];
//                 }
//             }
//         }
//         for (int i = 0; i < 8; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 if (ar[i] < pointy1)
//                 {
//                     pointy1 = ar[i];
//                 }
//             }
//         }
//         for (int i = 0; i < 8; i++)
//         {
//             if (i % 2 == 0)
//             {
//                 if (ar[i] > pointx2)
//                 {
//                     pointx2 = ar[i];
//                 }
//             }
//         }
//         for (int i = 0; i < 8; i++)
//         {
//             if (i % 2 != 0)
//             {
//                 if (ar[i] > pointy2)
//                 {
//                     pointy2 = ar[i];
//                 }
//             }
//         }

//                 if (ar[8] > pointx1 && ar[9] > pointy1 && ar[8] < pointx2 && ar[9] < pointy2)
//         {
//             printf("1\n");
//         }
//         else
//         {
//             printf("0\n");
//         }
//     }

//     return 0;
// }
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int ar[10];
        for (int j = 0; j < 10; j++) {
            scanf("%d", &ar[j]);
        }

        int pointx1 = ar[0];
        int pointx2 = ar[0];
        int pointy1 = ar[1];
        int pointy2 = ar[1];

        for (int j = 0; j < 10; j += 2) {
            if (ar[j] < pointx1) {
                pointx1 = ar[j];
            }
            if (ar[j] > pointx2) {
                pointx2 = ar[j];
            }
        }

        for (int j = 1; j < 10; j += 2) {
            if (ar[j] < pointy1) {
                pointy1 = ar[j];
            }
            if (ar[j] > pointy2) {
                pointy2 = ar[j];
            }
        }

        if (ar[8] > pointx1 && ar[8] < pointx2 && ar[9] > pointy1 && ar[9] < pointy2) {
            printf("1\n");
        } else {
            printf("0\n");
        }
    }

    return 0;
}
