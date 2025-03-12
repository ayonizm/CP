#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int h, m, n, d, ti;
    cin >> n;
    while(n--)
    {
        ti = 0;
        cin >> h >> m;
        d = 24 * 60;
        ti = h * 60 + m;
        cout << d - ti << endl;
    }
    return 0;
}