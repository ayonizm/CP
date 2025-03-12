#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int l = s1[i] - '0';
        int m = s2[i] - '0';
        int a, b;
        if(l>m){
            a = l - m;
            b =  10+m - l;
        }
        else{
            a = m - l;
            b =  10+l - m;
        }
        if(a<=b){
            sum += a;
        }
        else{
            sum += b;
        }
        
    }
    cout << sum;
    return 0;
}