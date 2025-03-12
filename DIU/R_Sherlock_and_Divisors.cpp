#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
void hello(long long int n,vector<long long int>&x){
    for (int i = 1; i *i<=n ; i++)
    {
        if(n%i==0){
            x.push_back(i);
            if(n/i!=i){
                x.push_back(n / i);
            }
        }
    }
    
}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        vector<long long int> l;
        int a;
        cin >> a;
        int count = 0;
        if(a%2!=0){
            cout << "0" << endl;
            continue;
        }
        else{
            hello(a, l);
            for(auto v:l){
                if(v%2==0){
                    count++;
                }
            }
            cout << count << endl;
        }
    }
    
    return 0;
}