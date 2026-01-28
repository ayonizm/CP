#include <stdio.h>
#include <string.h>
int main()
{
    char a[21], c[21];
    scanf("%s", a);
    scanf("%s", c);
    int val = strcmp(a, c);
  
    if (val==0)
    {
        printf("%s\n",a);
    }
    else if (val>0)
    {
        printf("%s\n",c);
    }
    else{
        printf("%s\n",a);
    }

    return 0;
}