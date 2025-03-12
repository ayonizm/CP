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
    vector<int> x;
    vector<int> y;
    while (n--)
    {
        int k;
        cin >> k;
        x.push_back(k);
        y.push_back(k);
    }
    sort(y.begin(), y.end());
    string s;
    cin >> s;
    for (int i = 0; i < s.length()-1; i++)
    {
        for (int j = i+1; j < s.length(); j++)
        {
        if(s[i]=='1'){
            if(x[i]>x[j]){
                swap(x[i],x[j]);
            }
        }
            
        }
        
    }
    bool fl = true;
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]!=y[i]){
            fl = false;
            break;
        }
    }
    if(fl){
        YES;
    }
    else{
        NO;
    }

    return 0;
}