#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << a * a << endl;
    }
    else
    {
        cout << "No" << endl;
    }

    return 0;
}