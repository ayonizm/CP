#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;

    long long l = 1000000000000000000LL, p = 1;

    for (int i = 0; i < n; ++i)
    {
        long long a;
        cin >> a;

        if (a == 0)
        {
            cout << 0 << endl;
            return 0;
        }

        if (p > l / a)
        {
            cout << -1 << endl;
            return 0;
        }

        p *= a;
    }

    cout << p << endl;
    return 0;
}