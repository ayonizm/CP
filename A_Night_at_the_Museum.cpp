#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string l = "abcdefghijklmnopqrstuvwxyz";
    string s;
    cin >> s;
    map<char, int> lim;
    for (int i = 0; i <26; i++)
    {
        lim[l[i]] = i + 1;
    }
    int count = 0;
    int j = 1;
    int sum = 0;
    for (int i = 0; i < s.length()-1; i++)
    {
        int k = (lim[s[i]] - lim[s[j]]);
        int l = (lim[s[j]] - lim[s[i]]);
        if(k<=0){
            k = k + 26;
        }
        else if(l<=0){
            l = l + 26;
        }
        sum = sum + min(k, l);
        j++;
    }
    int a = lim[s[0]] - 1;
    int b = 1 - lim[s[0]];
    if(a<=0){
        a = a + 26;
    }
    else if(b<=0){
        b = b + 26;
    }
    int f = min(a, b);
    sum = sum + f;
    cout << sum;
    return 0;
}