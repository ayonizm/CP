#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        x.push_back(a);
    }
    int m = *max_element(x.begin(), x.end());
    int sum = 0;
    for (int i = 0; i < x.size(); i++)
    {
        sum = sum + (x[i] - m);
    }
    cout << sum*-1;

    return 0;
}