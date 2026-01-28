#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int

int main()
{
    op();
    ll n;
    cin >> n;
    vector<int> x;
    while (n--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    int tar;
    cin >> tar;
    auto lw = lower_bound(x.begin(), x.end(), tar);
    auto up = upper_bound(x.begin(), x.end(), tar);

    int first_occurrence = lw - x.begin();
    int last_occurrence = up - x.begin() - 1;
    // if (lw != x.end() && *lw == tar)
    if(*lw==tar){
        
        cout << "first oc=" << first_occurrence <<" ";
        cout << "last oc=" << last_occurrence << endl;
    }
    
    else
    {
        cout << "-1 -1" << endl;
    }

    return 0;
}