#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main ()
{
    int number,n,i=0;
    srand(time(0));
    number = rand()%100+1;
    // printf("the number is %d",number);
    do
    {
        printf("guess the number: \n");
        scanf("%d",&n);
        if (n>number)
        {
            printf("lower the number\n");
        }
        else if (n<number)
        {
            printf("upgrade the number\n");
        }
        else
        {
            printf("congo mate\n");
        }
        i++;

    } while (n!=number);
    printf("your attempt score : %d",i);

    return 0;
}