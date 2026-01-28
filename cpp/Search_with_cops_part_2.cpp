#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll n;
    cin >> n;
    int temp;
    vector<int> x;
    while (n--)
    {
        cin >> temp;
        x.push_back(temp);
    }
    int fi;
    cin >> fi;
    int flag = 0;
    for(auto v:x){
        if(v==fi){
            flag = 1;
            break;
        }
    }
    if(flag){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    return 0;
}