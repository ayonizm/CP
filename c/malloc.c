#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    ptr[0] = 9;
    ptr[1] = 2;
    ptr[2] = 5;
    ptr[3] = 3;
    ptr[4] = 1;
    ptr[5] = 7;
    for (int i = 0; i <= 5; i++)
    {
        printf("%d ", ptr[i]);
    }
    // run time e allocate hoise 
    // auto allocate hoy nai





















    // free(ptr);
    // printf("%d", ptr[5]);
    return 0;
}