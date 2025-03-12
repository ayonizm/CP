#include<stdio.h>
#include<string.h>
int main()
{
    // //value initialize
    // int x = 2;
    // //pointer initialize
    // int *ptr = &x;
    // //printing pointers
    // printf("%d\n", ptr);
    // //pointers adress to another pointer
    // int *ptr2 = &ptr;
    // //printing that 2nd pointers adress
    // printf("%d\n", ptr2);
    // //printing ptr er moddhe jei adress ase oi adress er value
    // printf("%d\n", *ptr);
    // printf("%d", *ptr2);
    int t = 112;
    int *y = &t;
    int t = 4;
    printf("%d", *y);
    return 0;
}