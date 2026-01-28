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
    int a, b;
    cin >> a >> b;
    vector<int> x(n);
    for (int i = 0; i < n;i++){
        cin >> x[i];
    }
    ll sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum += x[i];
    }
    cout << sum << endl;

    return 0;
}