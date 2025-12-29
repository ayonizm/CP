// #include<bits/stdc++.h>
// using namespace std;
// #define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl "\n"
// #define Yes cout << "Yes\n"
// #define YES cout << "YES\n"
// #define yes cout << "yes\n"
// #define No cout << "No\n"
// #define NO cout << "NO\n"
// #define no cout << "no\n"
// #define ll long long int
// int main(){
//     op();
//     ll n;
//     cin >> n;
//     ll x = n * n;
//     vector<ll> arr(x);

//     for (ll i = 0; i < x; i++)
//     {
//         cin >> arr[i];
//     }

//     sort(arr.begin(), arr.end());

//     ll sum1 = 0, sum2 = 0;

//     if (n % 2 == 1)
//     {
//         for (ll i = 0; i < n - 1; i++)
//         {
//             sum1 += arr[x - 1 - i];
//             sum2 += arr[i];
//         }
//     }
//     else
//     {
//         for (ll i = 0; i < n; i++)
//         {
//             sum1 += arr[x - 1 - i];
//             sum2 += arr[i];
//         }
//     }

//     cout << sum1 - sum2 << endl;

//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int d = n * n;
    vector<int> p(d);
    for (int i = 0; i < d; i++)
    {
        cin >> p[i];
    }

    sort(p.begin(), p.end(), greater<>());
    long long tmax = 0, tmin = 0;
    for (int i = 0; i < n; i++)
    {
        tmax += p[i];
    }
    if (n % 2 == 0)
    {
        for (int i = d - 1; i >= d - n; i--)
        {
            tmin += p[i];
        }
    }
    else
    {
        for (int i = d - 1; i >= d-n+1; i--)
        {
            tmin += p[i];
        }
        tmin += p[n - 1];
    }

    long long res = tmax - tmin;
    cout << res << endl;
}
