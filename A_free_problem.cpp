#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define pi  2 * acos(0.0)
int main(){
    op();
    ll x = 0;
    string s1;
    ll a;
    cin >> a;
    while (a--)
    {
        cin >> s1;
        if(s1=="X++"||s1=="++X"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;

    return 0;
}