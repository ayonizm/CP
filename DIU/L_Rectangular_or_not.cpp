#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;

    int sides[3] = {a, b, c};
    sort(sides, sides + 3);

    if (sides[0] * sides[0] + sides[1] * sides[1] == sides[2] * sides[2])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}