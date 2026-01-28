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
    ll a;
    cin >> a;
    ll i, j, sum = 0;
    for (i = 2; i * i <= a; i++)
    {
        ll c = 0;
        while (a % i == 0)
        {
            a /= i;
            c++;
        }
        for (j = 1; j * (j + 1) <= 2 * c;)
        {
            j++;
        }
        sum += j - 1;
    }
    if (a > 1)
        sum++;
    cout << sum;

    return 0;
}