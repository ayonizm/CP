#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int

int main()
{
    int n;

    scanf("%d", &n);

    while (n--)
    {
        char a[51], b[51];

        scanf("%s %s", a, b);
        int i = 0, j = 0;
        int len1 = strlen(a);
        int len2 = strlen(b);
        int len;
        if (len1 >= len2)
        {
            len = len1;
        }
        else
        {
            len = len2;
        }

        for (int k = 0; k < len; k++)
        {
            if (i < len1)
            {
                printf("%c", a[i]);
                i++;
            }
            if (j < len2)
            {

                printf("%c", b[j]);
                j++;
            }
        }

        cout << endl;
    }

    return 0;
}