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
    int p;
    cin >> p;
    vector<int> x;
    while (p--)
    {
        int j;
        cin >> j;
        x.push_back(j);
    }
    sort(x.begin(), x.end());
    vector<int> t;
    int r = 0;

    for (int i = 1; i <=n; i++)
    {
        if(i==x[r]){
            r++;
            continue;
        }
        else{
            t.push_back(i);
        }
    }
    cout << t.size() << endl;
    for(auto v:t){
        cout << v << " ";
    }

    return 0;
}