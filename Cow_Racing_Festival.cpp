#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n, m;
    cin >> n >> m;
    vector<ll> ar;
    while (n--)
    {
        ll temp;
        cin >> temp;
        ar.push_back(temp);
    }
    ll sum = 0;
    ll k;
    for (int i = 0; i < ar.size()-1; i++)
    {
            
            
            if (ar[i + 1] < ar[i])
            {
                k = abs(ar[i + 1] - ar[i]);
                if (m >= k)
                {
                    sum += k;
                    m = m - k;
                }
                else if (m<k&&m!=0)
                {
                    sum += m;
                    k = k - m;
                    m = 0;  
                    sum += (k*2);
                }
                else if(m==0){
                    sum = sum + (k * 2);
                }

            ar[i+1] = ar[i];
            }
            
        
    }
    cout << sum << endl;

    return 0;
}