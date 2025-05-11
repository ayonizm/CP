#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll x, y;
    cin >> x;

    if (x < 5)
    {
        y = x * x - 3 * x + 4;
    }
    else
    {
        y = x + 7;
    }

    cout << y << endl;
    return 0;
}