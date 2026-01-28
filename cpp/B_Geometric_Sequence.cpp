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
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n == 2)
    {
        Yes;
        return 0;
    }
    bool g = true;
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] * a[i] != a[i - 1] * a[i + 1])
        {
            g = false;
            break;
        }
    }
    if (g)
    {
        Yes;
    }
    else
    {
        No;
    }

    return 0;
}