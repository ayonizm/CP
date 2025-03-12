#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a;
    cin >> a;
    vector<pair<double, double>> x;
    while (a--)
    {
        double t,y;
        cin >> t >> y;
        x.push_back({t, y});
    }
    double k = 400000000000000000.00;
    for (int i = 0; i < x.size()-1; i++)
    {
        for (int j = i+1; j < x.size(); j++)
        {
            
        double p = sqrt(pow((x[i].first - x[j].first), 2) + pow((x[i].second - x[j].second), 2));
        if(p<=k){
            k = p;
        }
        }
        
    }
    printf("%.14lf\n", k);
    return 0;
}
