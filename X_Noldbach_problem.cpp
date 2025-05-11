#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int

#define MAX 10000
bool flag[MAX + 1];
int prime[MAX + 5];
int total = 0;
void sieve(){
    flag[0] = false;
    flag[1] = false;
    for (int i = 2; i <=MAX ; i++)
    {
        flag[i] = true;
    }
    int f = sqrt(MAX);
    for (int i = 0; i<=f; i++)
    {
        if(flag[i]){
            for (int j = i*i; j <=MAX; j+=i)
            {
                flag[j] = false;
            }
        }
    }
    for (int i = 2; i <=MAX; i++)
    {
        if(flag[i]){
            prime[total++] = i;
        }
    }
}

int main(){
    op();
    sieve();
    int a, b;
    cin >> a >> b;
    int count = 0;
    vector<pair<int, int>> x;
    for (int i = 0;; i++)
    {
        if(prime[i+1]+prime[i]<=a){
            x.push_back({prime[i], prime[i + 1]});
        }
        else{
            break;
        }
    }
    for(auto v:x){
        int lo = v.first + v.second + 1;
        if(flag[lo]){
            count++;
        }
    }
    
    if (count == b)
    {
        cout << "YES" << endl;
        
    }
    else if(b==0){
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}