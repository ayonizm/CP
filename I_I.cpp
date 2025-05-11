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
int hello(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    if (a > b)
    {
        return 0;
    }
    return hello(a + 1, b) + hello(a + 2, b) + hello(a + 3, b);
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << hello(a, b) << endl;
    return 0;
}