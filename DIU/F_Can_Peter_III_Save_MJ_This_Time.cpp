#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int a, b;
    cin >> a >> b;
    vector<long long int> ar;
    for (long long int i = 0; i < a; i++)
    {
        long long int temp;
        cin >> temp;
        ar.push_back(temp);
    }
    long long int flag = 0;
    for (long long int i = 0; i < a-1; i++)
    {
        for (long long int j = i+1; j < a; j++)
        {
            long long int k = ar[i] + ar[j];
            if(k>=b){
                flag = 1;
                break;
            }
        }
        
    }
    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
    return 0;
}