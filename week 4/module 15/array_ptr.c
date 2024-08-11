#include <stdio.h>
int main()
{
    int ar[5] = {10, 20, 30, 40, 50};
    printf("0 index adrs %p\n", &ar[0]);
    printf("0 index adrs %p\n", ar);
    printf("0 index val %d\n", ar[0]);
    printf("0 index adrs %d\n", *ar);
    //    for next arry use loop and  plus 1
    printf("1 index adrs %d\n", *(ar + 1));
    printf("2 index adrs %d\n", *(ar + 2));
    printf("3 index adrs %d\n", *(ar + 3));
    printf("0 index adrs %d\n", 0[ar]);
    printf("0 index adrs %d\n", ar[0]);
  
    return 0;
}