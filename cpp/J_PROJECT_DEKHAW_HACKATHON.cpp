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
int sum(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 1, b = 1, sum = 2;
    for (int i = 3; i <= n; i++)
    {
        int c = a + b;
        sum += c;
        a = b;
        b = c;
    }
    return sum;
}
int main()
{
    int n, m;
    cin >> n >> m;
    int ay = sum(n) + sum(m);
    cout << ay << endl;
    return 0;
}