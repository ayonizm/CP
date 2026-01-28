#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<pair<int, int>> x;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        x.push_back({tem, i + 1});
    }
    x.push_back({x[0]});
    int j = 1;
    int m = abs(x[0].first-x[1].first);
    int a=x[0].second, b=x[1].second;
    for (int i = 0; i < x.size()-1; i++)
    {
        if(abs(x[i].first-x[j].first)<m){
            m = abs(x[i].first - x[j].first);
            a = x[i].second;
            b = x[j].second;
        }
        j++;
    }

    cout << a << " " << b << endl;

    return 0;
}