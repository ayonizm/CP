#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
    int x;
    cin >> x;
    vector<pair<int, int>> l(x);
    int a, b;
    for (int i = 0; i < x; i++)
    {
        cin >> a >> b;
        l[i].first = a;
        l[i].second = -b;
    }
    sort(l.begin(), l.end());
    for (int i = 0; i < x; i++)
    {
        cout << l[i].first << " " << -1*l[i].second << endl;
    }
    l.clear();
    }
    
    return 0;
}