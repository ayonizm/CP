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
void solve()
{
    map<string, int> x;
    map<int, string> y;

    x["zero"] = 0;
    x["one"] = 1;
    x["two"] = 2;
    x["three"] = 3;
    x["four"] = 4;
    x["five"] = 5;
    x["six"] = 6;
    x["seven"] = 7;
    x["eight"] = 8;
    x["nine"] = 9;
    x["ten"] = 10;
    // ............
    y[0] = "zero";
    y[1] = "one";
    y[2] = "two";
    y[3] = "three";
    y[4] = "four";
    y[5] = "five";
    y[6] = "six";
    y[7] = "seven";
    y[8] = "eight";
    y[9] = "nine";
    y[10] = "ten";
    string a, b, c;
    cin >> a >> b >> c;
    int a1 = x[a];
    int a3 = x[c];
    if (b == "minus")
    {
        ll k = a1 - a3;
        cout << y[k] << endl;
        return;
    }
    else
    {
        ll k = a1 + a3;
        cout << y[k] << endl;
        return;
    }
}
int main()
{
    op();
    test(t){
    solve();
    }
    return 0;
}