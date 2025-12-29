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
    while (n--)
    {
        ll k;
        cin >> k;
        vector<int> x;
        while (k--)
        {
            int p;
            cin >> p;
            x.push_back(p);
        }
        sort(x.begin(), x.end());
        int p = x[0];
        ll yt = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if(x[i]==p){
                yt++;
            }
            else{
                break;
            }
        }
        cout << x.size() - yt << endl;
    }
    

    return 0;
}