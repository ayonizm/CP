#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const ll N = 1e3+10;
ll pf[N][N];
int main(){
    op();
    int n;
    cin >> n;
    int ar[n][n];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> ar[i][j];
            pf[i][j] = ar[i][j] + pf[i - 1][j] + pf[i][j - 1] - pf[i - 1][j - 1];
        }
    }
    int tt;
    cin >> tt;
    while (tt--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int l = pf[c][d] - pf[a - 1][d]-pf[c][b-1]+pf[a-1][b-1];
        cout << l << endl;
    }
    

    return 0;
}