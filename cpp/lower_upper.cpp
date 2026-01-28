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
    int n;
    cin >> n;
    vector<int> x;
    while (n--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    int t;
    cin >> t;
    auto it = *upper_bound(x.begin(), x.end(), t);
    cout <<(it)  << endl;

    return 0;
}