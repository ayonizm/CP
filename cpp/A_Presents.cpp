#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<pair<int, int>> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back({temp, i});
    }
    sort(x.begin(), x.end());
    for (int i = 0; i <x.size(); i++)
    {
        cout << x[i].second + 1<<" ";
    }
    

    return 0;
}