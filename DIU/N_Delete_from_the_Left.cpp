#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1, s2;
    cin >> s1 >> s2;
    int m = max(s1.length(), s2.length());
    int n=min(s1.length(), s2.length());
    if(s1.length()!=m){
        for (int i = 0; i < m-n; i++)
        {
            s1 = '0' + s1;
        }
        
    }
    else{
        for (int i = 0; i < m-n; i++)
        {
            s2 = '0' + s2;
        }
        
    }
    int count = 0;
    for (int i = m-1; i >= 0; i--)
    {
        if(s1[i]==s2[i]){
            count++;
        }
        else{
            break;
        }
    }
    int a = m - count;
    int b = n - count;
    cout << a + b;

    return 0;
}