#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
#define MAX 100001
bool prime[MAX];
void primeg(){
    prime[0] = prime[1] = 1;
    for (long long int i = 2; i*i<= MAX; i++)
    {
        if(prime[i]==0){
            for (long long int j = i+i; j <=MAX; j+=i)
            {
                prime[j] = 1;
            }
        }
    }
    
}
int main(){
    op();
    primeg();
    ll n;
    cin >> n;
    ll omg = 1;
    while (n--)
    {
        ll count = 0;
        ll x, y;
        cin >> x >> y;
        for (int i = x; i <= y; i++)
        {
            if(prime[i]==0){
                count++;
            }
        }
        cout << "Case " << omg << ": " << count << endl;
        omg++;
    }
    
    return 0;
}