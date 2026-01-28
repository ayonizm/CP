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
    ll num;

    while (cin >> num)
    {


        if (num < 0)
        {
            break;
        }


        if (num == 0)
        {

            cout << "0" << endl;
            continue;
            
        }
        string f = "";


        while (num > 0)
        {

            ll rm = num % 3;

            f = to_string(rm) + f;

            num /= 3;

        }

        cout << f << endl;

    }
    return 0;
}