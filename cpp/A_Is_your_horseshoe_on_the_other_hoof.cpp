#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    vector<long long int> x;
    for (int i = 0; i < 4; i++)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    long long int l = unique(x.begin(), x.end()) - x.begin();
    long long int f = 4 - l;
    cout << f;
    return 0;
}