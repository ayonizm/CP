#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    while (n--)
    {
        vector<long long int> l;
        long long int k;
        cin >> k;
        while (k--)
        {
            int temp;
            cin >> temp;
            l.push_back(temp);
        }
        sort(l.begin(),l.end());
        long long int a =l[0]*l[l.size()-1];
        vector<long long int> g;
    for (long long int i = 2; i * i<=a; i++)
    {
        if(a%i==0){
            g.push_back(i);
            if(a/i!=i){
                g.push_back(a / i);
            }
        }
    }
    sort(g.begin(), g.end());
        if(g==l){
            cout << a << endl;
        }
        else{
            cout << "-1" << endl;
        }
       
        
    }
    
    return 0;
}