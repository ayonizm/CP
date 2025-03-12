#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int a;
    cin >> a;
    map<int, int> p;
    vector<int> x;
    while (a--)
    {
        int k;
        cin >> k;
        p[k]++;
        if(p[k]==1){
        x.push_back(k);
        }
    }
    if(x.size()==1){
        cout << "0" << endl;
        return 0;
    }
    cout << x.size() << endl;

    return 0;
}