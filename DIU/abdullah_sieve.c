#include<stdio.h>
#include<string.h>
#include<stdbool.h>

char mark[1000000000];
void sieve(int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        mark[i] = '1'; // mark এর ভেতর সকল সংখাকে মৌলিক বলে দিলাম।
    }
    for (int i = 2; i <= n; i++)
    {
        if (mark[i] == '1')
        { // তারমানে i মৌলিক সংখ্যা
            for (int j = i * i; j <= n; j += i)
            {
                mark[j] = '0'; // i  এর সব গুণিতক যৌগিক সংখ্যা
            }
        }
    }
}
int main()
{
    sieve(1000000000);
    printf("%c", mark[8]);
    return 0;
}