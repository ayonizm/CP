#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    int sx, sy, tx, ty;
    cin >> sx >> sy >> tx >> ty;
    int tt = sx;
    while (tt < tx)
    {
        cout << "R";
        tt++;
    }
    tt = sy;
    while (tt < ty)
    {
        cout << "U";
        tt++;
    }
    tt = tx;
    while (tt > sx)
    {
        cout << "L";
        tt--;
    }
    tt = ty;
    while (tt > sy)
    {
        cout << "D";
        tt--;
    }
    cout << "D";
    tt = sx;
    while (tt < tx + 1)
    {
        cout << "R";
        tt++;
    }
    tt = sy;
    while (tt < ty + 1)
    {
        cout << "U";
        tt++;
    }
    cout << "L";
    cout << "U";
    tt = tx;
    while (tt > sx - 1)
    {
        cout << "L";
        tt--;
    }
    tt = ty;
    while (tt > sy - 1)
    {
        cout << "D";
        tt--;
    }
    cout << "R";

    return 0;
}