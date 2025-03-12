#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll a, b;
    cin >> a >> b;
    vector<int> x;
    while (a--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    ll c = 0;
    for (int i = 0; i < x.size(); i++)
    {
        for (int j = i+1; j < x.size()-1; j++)
        {
            double f = (log(x[i] * x[j])) / b;
            int k = f;
            double oi = f - k;
            cout << oi << endl;
            if(oi==0.0){
                c++;
            }
        }
        
    }
    cout << c;

    return 0;
}