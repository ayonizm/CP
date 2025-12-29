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
#define pb push_back

int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    while (n--)
    {
        int p;
        cin >> p;
        x.pb(p);
    }
    sort(x.begin(), x.end());
    int target;
    cin >> target;
    int lo = 0;
    int hi = x.size() - 1;
    int mid;
    while (hi-lo>1)
    {
        mid = (hi + lo) / 2;
        if(target>x[mid]){
            lo = mid + 1;
        }
        else{
            hi = mid;
        }
    }
    if(target==x[lo]){
        cout << lo << endl;
    }
    else if(target==x[hi]){
        cout << hi << endl;
    }
    else{
        cout << "Not found" << endl;
    }
    

    return 0;
}