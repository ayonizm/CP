#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    while (n--)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    reverse(x.begin(), x.end());
    for(auto v:x){
        cout << v << " ";
    }

    return 0;
}