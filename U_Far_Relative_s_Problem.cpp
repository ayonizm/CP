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
const int N = 1e6;
int a[N], b[N];

void solve()
{
    int n;
    cin >> n;
    int ans = 0;
    while(n--){
        char c;
        int x, y;
        cin >> c >> x >> y;
        for (int j = x; j <= y; j++)
        {
            if (c == 'F')
                a[j]++;
            else
                b[j]++;
        }
    }
    for (int i = 1; i <= 1000; i++)
    {
        ans = max(ans, min(b[i], a[i]) * 2);
    }
    cout << ans << endl;
}
int main(){
    op();
    
    solve();
    

    return 0;
}