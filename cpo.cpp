#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
int part(vector<int> &x, int start, int end)
{
    int p = x[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (x[j] < p)
        {
            i++;
            swap(x[j], x[i]);
        }
    }
    i++;
    swap(x[end], x[i]);
    return i;
}
void quick_sort(vector<int> &x, int start, int end)
{
    if(end<=start){
        return;
    }
    int pivot = part(x, start,end);
    quick_sort(x, start, pivot - 1);
    quick_sort(x, pivot + 1, end);
}

void insertion_sort(vector<int>&x){
    for (int i = 1; i < x.size(); i++)
    {
        int key = x[i];
        bool ok = false;
        int j = i - 1;
        while (j>=0&&x[j]>key)
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j+1] = key;
    }
    
}
void selection_sort(vector<int>&x){
    int k;
    for (int i = 0,k = x.size() - i - 1; i < k; i++, k--)
    {
        int mn = i;
        int mx = k;
        for (int j = i+1; j <k; j++)
        {
            if(x[j]<x[mn]){
                mn = j;
            }
        }
        for (int j = i+1; j <k; j++)
        {
            if(x[j]>x[mx]){
                mx = j;
            }
        }
        swap(x[i], x[mn]);
        swap(x[k], x[mx]);
    }
  
    
    
}
void merge(vector<int> &left, vector<int> &right,vector<int>&x){
    int lsize = left.size();
    int rsize = right.size();
    int i = 0;
    int l = 0;
    int r = 0;
    while (l<lsize&&r<rsize)
    {
        if(left[l]<right[r]){
            x.pb(left[l]);
            l++;
        }
        if(left[l]>right[r]){
            x.pb(right[r]);
            r++;
        }
    }
    while (l<lsize)
    {
        x.pb(left[l]);
        l++;
    }
    while (r<rsize)
    {
        x.pb(right[r]);
        r++;
    }
} 
void merge_sort(vector<int> &x)
{
    int n = x.size();
    if(n<=1){
        return;
    }
    int md = n / 2;
    vector<int> l;
    vector<int> r;
    int i = 0;
    int j = 0;
   for (; i < x.size(); i++)
   {
    if(i<md){
        l.pb(x[i++]);
    }
    else{
        r.pb(x[i]);
    }
   }
   merge_sort(l);
   merge_sort(r);
   merge(l, r, x);
}
void solve()
{
    vector<int> x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    // bouble_sort(x);
    // quick_sort(x, 0, x.size() - 1);
    // insertion_sort(x);
    // selection_sort(x);
    merge_sort(x);
    for (auto v : x)
    {
        cout << v << " ";
    }
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}