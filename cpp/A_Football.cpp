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
    int n;
    cin >> n;
    map<string, int> mp;    
while (n--)
{
    string s;
    cin >> s;
    mp[s]++;
}
string p = "";
int max = 0;
for(auto v: mp){
    if(v.second > max){
        max = v.second;
        p = v.first;
    }
}
cout << p << endl;

    return 0;
}