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
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<int> x1;
    vector<int> x2;
    int sum = 0;
    int ct = 0;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        if(p>0){
            sum += p;
            ct++;
        }
        else{
            x1.push_back(p);
        }
    }
    if(sum==0){
        cout << 0 << endl;
        return 0;
    }
    int l = 0;
    for (int i = 0; i < m; i++)
    {
        int p;
        cin >> p;
        if(ct!=0){
            ct--;
        }
        else{
            x2.push_back(p);
        }
    }
    sort(x1.begin(), x1.end());
    sort(x2.begin(), x2.end(), greater<int>());

    return 0;
}