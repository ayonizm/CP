#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    optimize();
    vector<int> x;
    for (int i = 0; i < 3; i++)
    {
        int n;
        cin >> n;
        x.push_back(n);
    }
    sort(x.begin(), x.end());
    int l = unique(x.begin(), x.end()) - x.begin();
    cout<< l<<endl;

    return 0;
}