#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    long long int sum = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]=='1'){
            sum += a1;
        }
        else if(s[i]=='2')
        {
            sum += a2;
        }
        else if(s[i]=='3'){
            sum += a3;
        }
        else{
            sum += a4;
        }
    }
    cout << sum;

    return 0;
}