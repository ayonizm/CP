#include<stdio.h>
#include<string.h>


int main()
{
    int n;
    scanf("%d", &n);
    struct icpc
    {
        int age;
        int roll;
        char name[100];
    } student[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &student[i].age);
        scanf("%d", &student[i].roll);
        scanf("%s", &student[i].name);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", student[i].age);
        printf("%d ", student[i].roll);
        printf("%s\n", student[i].name);
    }
    
    return 0;
}