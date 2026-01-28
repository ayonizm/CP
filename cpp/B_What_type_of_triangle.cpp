#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c)
    {
        cout << 1 << endl;
    }
    else if (a == b || b == c || a == c)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
    }

    return 0;
}