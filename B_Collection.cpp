#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    int a = n;
    while (n--)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    sort(x.begin(), x.end());
    int l = unique(x.begin(), x.end()) - x.begin();
    cout << a - l;

    return 0;
}