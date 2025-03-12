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
        ll a, b;
        cin >> a >> b;
        ll temp = 2;
        int count = 1;
        if(a<=2){
            cout << "1" << endl;
            continue;
        }
        while (temp<=a)
        {
            if(a==temp){
                break;
            }
            count++;
            temp += b;
        }
        cout << count << endl;
    }
    
    return 0;
}