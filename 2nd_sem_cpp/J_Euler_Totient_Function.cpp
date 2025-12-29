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

int phi(int n)
{
    float result = n;
    for (int i = 2; i * i <= n; i++)
    { 
        if (n % i == 0)
        { 
            while (n % i == 0)
            {           
                n = n / i; 
            }
            result = result * (1 - 1.0 / i);
        }
    }
    if (n > 1)
    {
        result = result * (1 - 1.0 / n);
    }
    return result;
}
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        ll p;
        cin >> p;
        cout << phi(p) << endl;
    }

    int p = 2;
    int q = 3;
    int m = max(p, q);
    return 0;
}