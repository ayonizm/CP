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
    vector<int> ay(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> ay[i];
    }
    sort(ay.begin(), ay.end());
    int x = ay.back();
    for (int i = 1; i <= x; ++i)
    {
        if (x % i == 0)
        {
            auto it = find(ay.begin(), ay.end(), i);
            if (it != ay.end())
            {
                ay.erase(it);
            }
        }
    }
    int y = ay.back();
    cout << x << " " << y << endl;

    return 0;
}