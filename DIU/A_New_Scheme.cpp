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
    
}
int main()
{
    op();
    int n = 8;
    int p1 = 1;
    int p2 = 1;
    int p3 = 1;
    int t = 0;
    while (n--)
    {

        int r;
        cin >> r;
        
        if(r>=100&&r<=675){

        }
        else{
            p1 = 0;
            break;
        }

        if (r%25!=0)
        {
            p2 = 0;
        }
        if(t>r){
            p3 = 0;
        }
        t = r;
    }
    if(p1&&p2&&p3){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}