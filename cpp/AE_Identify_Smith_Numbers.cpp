#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
long long int prime(long long int n){
    
    long long int count = 0;
    for (long long int i = 1; i *i<=n; i++)
    {
        if(n%i==0){
            count++;
            if((n/i)!=i){
                count++;
            }
        }
    }
    if(count==2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    op();
    long long int n;
    cin >> n;
    string k=to_string(n);
    vector<long long int> p;
    while (n%2==0)
    {
        p.push_back(2);
        n = n / 2;
    }
    
     for (long long int i = 3; i * i <= n; i++) {
        while (prime(i) && n % i == 0) {
            p.push_back(i);
            n /= i;
        }
    }
    if (n > 2) {
        p.push_back(n);
    }
    long long int sum1= 0;
    long long int sum2 = 0;
    for(auto v:p){
        sum1 = sum1 + v;
    }

    for (long long int i = 0; i < k.length(); i++)
    {
        sum2 = sum2 + (k[i] - '0');
    }
    if(sum1==sum2){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
    

    return 0;
}