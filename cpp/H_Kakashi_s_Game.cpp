#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    long long int n, m;
    cin >> n >> m;
    long long int k = n;
    vector<long long int> x;
    while (n--)
    {
        long long int temp;
        cin >> temp;
        x.push_back(temp);
    }
    vector<long long int> vai1;
    vector<long long int> vai2;
    long long int lim = x[m - 1];
    vai1.push_back(lim);
    for (long long int i = m; i <k; i++)
    {
        if(x[i]>=lim){
            lim = x[i];
            vai1.push_back(lim);
        }
    }
    long long int k1 = x[m - 1];
    vai2.push_back(k1);
    for (long long int i = m-2; i >=0; i--)
    {
        if(x[i]<=k1){
            k1 = x[i];
            vai2.push_back(k1);
        }
    }
    for(auto v:vai1){
        cout << v << " ";
    }
    cout << endl;
    for(auto v:vai2){
        cout << v << " ";
    }
    cout << endl;


    return 0;
}