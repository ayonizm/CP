#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
const double pi = 2 * acos(0.0);
int main(){
    op();
    int k = 4;
    set<int> x;
    while (k--)
    {
        int c;
        cin >> c;
        x.insert(c);
    }
    if(x.size()==2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}