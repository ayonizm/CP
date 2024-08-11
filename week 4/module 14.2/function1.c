#include<stdio.h>
int sum(int x,int y)
{
    int sum = x + y;
    return sum;

}
int main()
{
   printf("%d",sum(100,100));
   return 0;
}