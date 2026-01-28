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
int parti(vector<int> &x, int start, int end)
{
    int pivot = x[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (x[j] < pivot)
        {
            i++;
            swap(x[i], x[j]);
        }
    }
    i++;
    swap(x[i], x[end]);
    return i;
}
void quicksort(vector<int> &x, int start, int end)
{
    if (end <= start)
    {
        return;
    }
    int pivot = parti(x, start, end);
    quicksort(x, start, pivot - 1);
    quicksort(x, pivot + 1, end);
    
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
    quicksort(x, 0, x.size() - 1);
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