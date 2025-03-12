#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    ll count = 0;
    ll lim;
    cin >> lim;
    vector<int> x;
    for (int i = 0; i < 3; i++)
    {
        int temp;
        cin >> temp;
        if(temp>lim){
            count++;
        }
    }
    if(count!=0){
        cout << "ERROR" << endl;
    }
    else{
        cout << "OK" << endl;
    }
    
    return 0;
}