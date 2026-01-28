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
    int sum = 0;
    vector<int> x;
    int ct = 0;
    while (n--)
    {
        int p;
        cin >> p;
        if(p<4){
            x.push_back(p);
            
        }
        else{
            ct++;
        }
    }
    sort(x.begin(), x.end());
    for (int i = 0; i < x.size()/2; i++)
    {
        if((x[i]+x[x.size()-i-1])<=4){
            ct++;
        }
        else{
            ct += 2;
        }
        
    }
    // for(auto v:x){
    //     cout << v << " ";
    // }
    cout << ct << endl;

    return 0;
}