#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define mx 1000000
float phi[mx+1];
void sievePhi(int n){
	for(int i=1;i<=n;i++){
		phi[i]=i;
	}
	for(int i=2;i<=n;i++){
		if(phi[i]==i){
			for(int j=i;j<=n;j+=i){
				phi[j]*=(1-1.0/i);
			}
		}
	}
}
long long int eu(long long int n){
    double r = n;
    for (int i = 2; i*i <=n ; i++)
    {
        if(n%i==0){
            while (n%i==0)
            {
                n = n / i;
            }
            r = r * (1 - 1.00/ i);
        }
    }
    // p(n)=n*(1-1/p1)*(1-1/p2)*......
    if(n>1){

            r = r * (1 - 1.00 / n);
    }
    return r;
}

int main(){
    op();
    long long int x;
    cin >> x;
    sievePhi(x);
    cout << phi[x];
    return 0;
}