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
    ll a;
    cin >> a;
    vector<int> x;
    while (a--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    vector<int> p;
    p.push_back(x[0]);
    for (int i = 1; i < x.size(); i++)
    {
        p.push_back(x[i] + p[i-1]);
    }
    for(auto v:p){
        cout << v << " ";
    }
    cout << endl;
    int l;
    cin >> l;
    while (l--)
    {
        int a, b;
        cin >> a >> b;
        if(a==1){
            a++;
        }
        cout<<p[b-1]-p[a-2]<<endl;
    }
    

    return 0;
}