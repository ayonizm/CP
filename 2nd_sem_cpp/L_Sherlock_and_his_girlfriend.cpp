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
int ay[100005];
int main(){
    op();
    int i, n, j;
    cin >> n;
    for (i = 2; i <= n + 1; i++)
    {
        if (!ay[i])
            for (j = 2 * i; j <= n + 1; j += i)
                ay[j] = 1;
    }

    if (n > 2)
        cout << "2\n";
    else
        cout << "1\n";

    for (i = 2; i <= n + 1; i++)
    {
        if (!ay[i])
            cout << "1 ";
        else
            cout << "2 ";
    }

    return 0;
}