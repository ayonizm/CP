//************************************************************
//  █████  ██    ██   ██████   ███    ██ |
// ██   ██ ██    ██  ██    ██  ████   ██ |
// ███████   ████    ██    ██  ██ ██  ██ |
// ██   ██    ██     ██    ██  ██  ██ ██ |
// ██   ██    ██      ██████   ██   ████ |
// ************************************************************/
#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int

int main()
{
    op();
    int n;
    cin >> n;
    int tar;
    cin >> tar;
    vector<int> x;
    
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    int l = 0;
    int r = n - 1;
    int is = false;
    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (x[mid] == tar)
        {
            cout << mid << endl;
            is = true;
            break;
        }
        else if (x[mid] > tar)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    if(!is){
        cout << "NON" << endl;
    }
    

    return 0;
}