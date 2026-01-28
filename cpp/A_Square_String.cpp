#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    int n;
    scanf("%d", &n);

    while (n--)
    {
        char s[1000];
        scanf("%s", &s);
        int l = strlen(s);

        if (s[0] != '.')
        {
            printf("%c", s[0]);
            for (int i = 1; i < l - 1; i++)
            {
                if (s[i] == '.' && s[i + 1] >= 'a' && s[i + 1] <= 'z')
                {
                   

                    printf("%c", s[i + 1]);
                    
                }
            }
        }

        else
        {

            for (int i = 0; i < l - 1; i++)
            {
                if (s[i] == '.' && isalpha(s[i + 1]))
                {
                    printf("%c", s[i + 1]);
                }
            }
        }

        printf("\n");
    }

    return 0;
}