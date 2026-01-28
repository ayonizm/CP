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
    ll a;
    cin >> a;

if(a>=0){
    cout << a / 10 << endl;
}

    else if (a < 0)
    {
        if(a%10==0){

            cout << a/10 << endl;
        }
        else{
            cout << (a/10)-1 << endl;
        }

    }


}