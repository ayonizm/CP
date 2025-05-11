#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n;
    cin >> n;
    
    long long int first;
    long long int second;
    for ( long long int j = 2; j <=n; j++)
    {
        long long int count = 0;
        for (long long int i = 1; i * i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
                if (j / i != i)
                {
                    count++;
                }
            }
        }
        if(count==2){
            first = j;
        }
    }
    for ( long long int j = n;; j++)
    {
        long long int count = 0;
        for (long long int i = 1; i * i <= j; i++)
        {
            if (j % i == 0)
            {
                count++;
                if (j / i != i)
                {
                    count++;
                }
            }
        }
        if(count==2){
            second = j;
            break;
        }
    }
    long long int b = second - n;
    long long int a = n-first;
    if(first==n&&second==n){
        cout << first;
    }
    else if(a==b){
        cout << first << " " << second;
    }
    else if(a<b){
        cout << first;
    }
    else{
        cout << second;
    }
    

    return 0;
}