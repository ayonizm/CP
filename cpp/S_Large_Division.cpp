#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int ct = 1;
    while (n--)
    {
        string a;
        cin >> a;
        int b;
        cin >> b;
    if(b<0){
        b *= -1;
    }
        if(a[0]=='-'){
            a.erase(a.begin());
        }
        long long int r = 0;
        for (int i = 0; i < a.length(); i++)
        {
            r = r * 10 + (a[i] - '0');
            r %= b;
        }
        if(r==0){
            cout << "Case " << ct << ": divisible" << endl;
        }
        else{
            cout << "Case " << ct << ": not divisible" << endl;

        }
        ct++;
    }
    
    return 0;
}