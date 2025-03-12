#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int r = *max_element(x.begin(), x.end());
    for (int i = 0; i < n; i++)
    {
        if(x[i]==r){
            cout << i << endl;
            break;
        }
    }
    

    return 0;
}