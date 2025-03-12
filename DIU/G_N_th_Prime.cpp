#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
	bool mark[10000000+1];
vector<ll>sieve(){
    ll n = 10000000;
    for(ll i=0;i<n+1;i++){
		mark[i]=1;
	}
	for(ll i=2;i*i<=n;i++){
		if(mark[i]==1){
			for(int j=i*i;j<=n;j+=i){
				mark[j]=0; 
			}
		}
	}
    vector<ll> ayo;
    for (ll i = 2; i <= n; ++i) {
        if (mark[i]) {
            ayo.push_back(i);
        }
    }
    return ayo;
}

int main(){
    op();
    vector<ll> pr=sieve();
    ll n;
    cin >> n;
    
    cout << pr[n-1];

    return 0;
}