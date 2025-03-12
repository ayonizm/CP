#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int k = 3;
    vector<int> x;
    while (k--)
    {
        int p;
        cin >> p;
        x.push_back(p);
    }
    sort(x.begin(), x.end());
    for(auto v:x){
        cout << v << " ";
    }

    return 0;
}