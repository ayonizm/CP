#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    while (n--)
    {
        int sum = 0;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        int vai1;
        int vai2;
        int vai3;
        int l = 0;
        if(b>=a){
            sum += a;

        }
        else{
            sum += b;
            int k = a - b;
            l += k;
        }
        if(c>=a){
            sum += a;

        }
        else{
            sum += c;
            int k = a - c;
            l += k;
        }

        if(l>=d){
            sum += d;
        }
        else{
            sum += l;
        }
        cout << sum << endl;
    }
    
    return 0;
}