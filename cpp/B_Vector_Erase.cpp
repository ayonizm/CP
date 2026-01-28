#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main(){
    op();
    int n;
    cin >> n;
    vector<int>x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int a1;
    cin >> a1;
    x.erase(x.begin() + a1-1);
    int a2, a3;
    cin >> a2 >> a3;
    x.erase(x.begin() + a2-1, x.begin() + a3-1);
    cout << x.size() << endl;
    for(auto v:x){
        cout << v << " ";
    }
    return 0;
}