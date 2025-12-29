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
    vector<pair<int, int>> x;
    vector<int> p1;
    vector<int> p2;
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        p1.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        p2.push_back(k);
    }
    for (int i = 0; i < n; i++)
    {
        x.push_back({p1[i], p2[i]});
    }
    
    sort(x.begin(), x.end());
    for(auto v:x){
        cout << v.first << " " << v.second << endl;
    }

    return 0;
}