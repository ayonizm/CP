#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='4'&&s[i]!='7'){
            cout << "NO" << endl;
            return 0;
        }
    }
    int sum1 = 0;
    int sum2 = 0;
    for (int i = 0; i < n/2; i++)
    {
        sum1 += (s[i] - '0');
        sum2 += (s[n-i-1] - '0');
    }
    if(sum1==sum2){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    

    return 0;
}