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

    int p = n;
    int q = n;
    int k = 0;
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < k; j++)
        {
            printf(" ");
        }
        for (int j = n - 1; j >= r; j--)
        {
            printf("%d ", q);
            q++;
        }
        
        printf("\n");
        p--;
        q = p;
        k++;
        r++;
    }

    return 0;
}