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
    for (int i = 0; i < n; i++)
    {
        int y;
        cin >> y;
        x.push_back(y);
    }
    int r = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            // cout << x[i] << " " << x[j] << endl;
            if((x[i]+x[j])%p==0){
                r++;
            }
        }
        
    }
    cout << r << endl;

    return 0;
}