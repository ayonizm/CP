#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    if (s.length()==1){
        cout << "0";
        return 0;
    }
        long long int n = 0;
    for (int i = 0; i < s.length(); i++)
    {
        n = n + (s[i] - '0');
    }
    
    
    long long int count=0;
    while (n!=1)
    {
        long long int f = n / 10;
        if(f==0){
            break;
        }
        
        count++;
        long long int sum = 0;
        while (n>0)
        {
            long long int tem = n % 10;
            n = n / 10;
            sum = sum + tem;
        }
        n = sum;
    }
    cout << count+1;

    return 0;
}