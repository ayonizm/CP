#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    cin >> x >> y;
    vector<int> k;
    while (x--)
    {
        int temp;
        cin >> temp;
        k.push_back(temp);
    }
    int sum = 0;
    for (int i = 0; i < y; i++)
    {
        int t;
        cin >> t;
        sum += k[t - 1];
    }
    cout << sum << endl;

    return 0;
}