#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    float *ptr;
    ptr = (float *)malloc(5 * sizeof(float));
    ptr[0] = 0.9;
    ptr[1] = 0.3;
    ptr[2] = 1.3;
    ptr[3] = 3.3;
    ptr[4] = 3.5;
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f ", ptr[i]);
    }
    

    return 0;
}