// #include <stdio.h>

// int main() {
//     int x, y, z;
//     int ar[3];

//     while (scanf("%d %d %d", &x, &y, &z) != EOF) {
//         if (x == 0 && y == 0 && z == 0) {
//             printf("*\n");
//         } else {
//             ar[0] = x;
//             ar[1] = y;
//             ar[2] = z;

//             int zero_count = 0;
//             int one_count = 0;

//             for (int i = 0; i < 3; i++) {
//                 if (ar[i] == 0) {
//                     zero_count++;
//                 } else if (ar[i] == 1) {
//                     one_count++;
//                 }
//             }

//             if (zero_count < one_count) {
//                 for (int i = 0; i < 3; i++) {
//                     if (ar[i] == 0)
//                      {
//                         if (i == 0)
//                          {
//                             printf("A\n");
//                         }
//                         else if (i == 1)
//                         {
//                             printf("B\n");
//                         }
//                         else if (i == 2)
//                         {
//                             printf("C\n");
//                         }
//                         break;
//                     }
//                 }
//             }
//              else if (one_count < zero_count)
//              {
//                 for (int i = 0; i < 3; i++)
//                  {
//                     if (ar[i] == 1)
//                      {

//                         if (i == 0) {
//                             printf("A\n");
//                         }

//                         else if (i == 1)
//                         {
//                             printf("B\n");
//                         }
//                          else if (i == 2)
//                           {
//                             printf("C\n");
//                         }
//                         break;
//                     }
//                 }
//             }
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main(void)
{
    int a, b, c;

    while (scanf("%d %d %d", &a, &b, &c)!=EOF)
    {
        if (a == b && b == c)
        {

            printf("*\n");
        }
        else if (b == c && a != c)
        {
            printf("A\n");
        }
        else if (a == c && b != c)
        {
            printf("B\n");
        }
        else{
            printf("C\n");

        }
    }
    return 0;
}
