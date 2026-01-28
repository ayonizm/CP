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
    int n = 5;
    vector<int> x;
    while (n--)
    {
        int y;
        cin >> y;
        x.push_back(y);
    }
    sort(x.begin(), x.end());
    ll p = 0;
    ll q = 0;
    for (int i = 0; i < x.size()-1; i++)
    {
        p += x[i];
    }
    for (int i = 1; i < x.size(); i++)
    {
        q += x[i];
    }
    cout << p << " " << q << endl;

    return 0;
}