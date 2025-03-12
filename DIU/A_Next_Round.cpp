#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n, m;
    cin >> n >> m;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int l = x[m - 1];
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]>=l&&x[i]>0){
            cnt++;
        }
    }
    cout << cnt;

    return 0;
}