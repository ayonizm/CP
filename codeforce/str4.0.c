#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    scanf("%s", s);
    int count[26]={0};
    for (int i = 0; i < strlen(s); i++)
    {
        int x = s[i]-97;
        count[x]++;
    }
    // for (int i = 0; i < 26; i++)
    // {
    //     if (count[i]!=0)
    //     {
    //         printf("%c - %d\n",i+97,count[i]);
    //     }
    // }
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i]-97;
        if (count[val]!=0)
        {
            printf("%c - %d\n",val+97,count[val]);
        }
        count[val]=0;
        
    }
    
    


    return 0;
}