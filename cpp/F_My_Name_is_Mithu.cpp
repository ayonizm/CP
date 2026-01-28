#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        ll count = 0;
        ll a, b, c;
        cin >> a >> b >> c;
        if(a+b>c&&b+c>a&&c+a>b){
            cout << "0" << endl;
            continue;
        }
        if(a+b<=c){
            count = count + abs(c - (a + b));
        }
        if(a+c<=b){
            count = count + abs(b - (a + c));
        }
        if(b+c<=a){
            count = count + abs(a - (b + c));
        }
        cout << count+1 << endl;
    }
    
    return 0;
}