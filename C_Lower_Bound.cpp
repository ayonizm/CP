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
int lb(vector<int> arr, int n, int x)
{
    int low = 0, high = n - 1;
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] >= x)
        {
            ans = mid;
            high = mid - 1;
        }
        else
        {
            low = mid + 1; 
        }
    }
    return ans;
}
int main(){
    op();
    ll n;
    cin >> n;
    ll m;
    cin >> m;
    vector<int> x;
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
        if (lb(x, n, l)==n){
            cout << -1 << endl;
            continue;
        }
            cout << lb(x, n, l)+1 << endl;
        
    }
    
    

    return 0;
}