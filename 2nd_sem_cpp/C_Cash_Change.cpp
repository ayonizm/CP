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
    int sum = 0;
    ll p;
    cin >> p;
    vector<int> l;
    vector<int> x = {500, 100, 50, 10, 5, 1};
    for (int i = 0; i < x.size(); i++)
    {
        if(p==0){
            break;
        }
        while (p/x[i]!=0)
        {
            l.push_back(x[i]);
            p -= x[i];
        }
        
    }
    sort(l.begin(), l.end());
    for(auto v:l){
        cout << v << " ";
    }

    return 0;
}