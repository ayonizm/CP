#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    string s;
    cin >> s;
    int m=0;
    map<char, int> x;
    map<char, int> p;
    for (int i = s.length()-1; i >=0; i--)
    {
        x[s[i]]++;
        p[i] = x.size();
    }
    for (int i = 0; i < s.length(); i++)
    {
        cout <<s[i]<<" "<< p[i] << endl;
    }
    

    return 0;
}