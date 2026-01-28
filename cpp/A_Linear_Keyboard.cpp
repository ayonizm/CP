#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
void solve(){
    string s;
    cin >> s;
    int l1 = s.length();
    map<char, int> x;
    for (int i = 1; i <= l1; i++)
    {
        x[s[i]] = i;
    }
    string k;
    cin >> k;
    int l2 = k.length();
    int sum = 0;
    for (int i = 0; i < l2-1; i++)
    {
        sum += (abs(x[k[i]] - x[k[i + 1]]));
    }
    cout << sum << endl;
}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        solve();
    }
    

    return 0;
}