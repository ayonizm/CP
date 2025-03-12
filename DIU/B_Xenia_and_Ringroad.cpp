#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n, m;
    cin >> n >> m;
    vector<long long int> x;
    long long int k = m;
    while (m--)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    long long int pos = 1;
    long long int ct = 0;
    for (int i = 0; i < k; i++)
    {
        if(pos>x[i]){
            ct = ct + (n - pos) + x[i];
        }
        else if(pos<x[i]){
            ct = ct + abs(pos - x[i]);
        }
        pos = x[i];
        
    }
    cout << ct << endl;
    return 0;
}