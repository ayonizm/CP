#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    vector<int> a = {1, 1 ,1 ,6 ,7 ,6 ,7};
    vector<int> b = {3, 2 ,8 ,9 ,3, 9};
    map<int, int> x;
    map<int, int> y;
    for (auto v : a)
    {
        x[v]++;
    }
    for (auto v : b)
    {
        y[v]++;
    }
    vector<int> l;
    for (auto v : a)
    {
        if (x[v]!=0&&y[v]==0)
        {
            l.push_back(v);
        }
    }
    for(auto v:l){
        cout << v << " ";
    }

    return 0;
}