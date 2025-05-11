#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
#define ot()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
int main()
{
    ot();

    ll t;
    cin >> t;

    while (t--){

        int x, y;

        cin >> x >> y;

        if (y % x == 0){

            cout << x << " " << y << endl;

        }

        else {

            cout << -1 << endl;

        }


    }



    return 0;
}