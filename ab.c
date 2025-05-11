#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    /*******************************fgets********************************* */
    char name1[100];
    char name2[100];
    // // gets(name1);
    // // gets(name2);
    fgets(name1, 100, stdin);
    fgets(name2, 100, stdin);
    int len1 = strlen(name1);
    int len2 = strlen(name2);
    if (name1[len1 - 1] == '\n')
    {
        name1[len1 - 1] = '\0';
    }
    if (name2[len2 - 1] == '\n')
    {
        name2[len2 - 1] = '\0';
    }
    // printf("%s %s", name1,name2);
    // printf("%s", name2);
    // // scanf("%s", &name1);
    // // scanf("%s", &name2);
    /*******************************functions********************************* */

    // puts(name);
    // printf("%s\n", name);
    // int n = strlen(name);
    // printf("%d", n);
    // char a = 'a';
    // a = toupper(a);
    // printf("%c", a);
    // for (int i = 0; i < strlen(name); i++)
    // {
    //     name[i] = tolower(name[i]);
    // }
    // puts(name);
    // printf("%s", name1);

    /*******************************string copy********************************* */
    // int a, b;
    // a = strlen(name1);
    // b = strlen(name2);
    // char name3[100];
    // for (int i = 0; i < a; i++)
    // {
    //     name3[i] = name1[i];
    // }
    // int k = 0;
    // for (int i = a; i < a+b; i++)
    // {
    //     name3[i] = name2[k];
    //     k++;
    // }
    // printf("%s", name3);
    // strcpy(name1,name2);
    /*******************************string concatination********************************* */
    // char name1[100];
    // char name2[100];
    // fgets(name1, 100, stdin);
    // fgets(name2, 100, stdin);

    // name1[strcspn(name1, "\n")] = '\0';
    // name2[strcspn(name2, "\n")] = '\0';

    // strcat(name1, name2);
    // printf("%s", name1);
    /*******************************string lexicographycal********************************* */
    // char name1[100];
    // char name2[100];
    // fgets(name1, 100, stdin);
    // fgets(name2, 100, stdin);

    // name1[strcspn(name1, "\n")] = '\0';
    // name2[strcspn(name2, "\n")] = '\0';
    // int t = strcmp(name1, name2);
    // if(t==0){
    //     printf("same");
    // }
    // else if(t==1){
    //     printf("name of 1 is max");
    // }
    // else{
    //     printf("name of 2 is max");
    // }

    return 0;
}