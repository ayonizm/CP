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
int bin(vector<int>&x,int target,int n){
    int lo = 0;
    int hi = n - 1;
    while((hi-lo)>1){
        int mid = (hi + lo) / 2;
        if(x[mid]<=target){
            lo = mid ;
        }
        else{
            hi = mid;
        }
    }
    if(x[lo]==target){
        return lo;
    }
    else if(x[hi]==target){
        return hi;
    }
    else{
        return -1;
    }
}
int main(){
    op();
    ll n,m;
    cin >> n>>m;
    vector < int > x;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    while (m--)
    {
        int l;
        cin >> l;
        if (bin(x, l, n)==-1){
            cout << -1 << endl;
            continue;
        }
            cout << bin(x, l, n)+1 << endl;
        
    }
    
    

    return 0;
}