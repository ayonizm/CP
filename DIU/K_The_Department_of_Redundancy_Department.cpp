#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    op();
    long long int n;
    vector<long long int> x;
    map<long long int,long long int> y;

    while (cin>>n)
    {
        if(y[n]==0){
            x.push_back(n);
        }
        y[n]++;
    }
    for(auto v:x){
        cout << v <<" "<<y[v]<<endl;
    }
    

    return 0;
}