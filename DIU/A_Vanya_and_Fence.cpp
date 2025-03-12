#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    cin >> x >> y;
    vector<int> l;
    int count = 0;
    for (int i = 0; i < x; i++)
    {
        int tep;
        cin >> tep;
        l.push_back(tep);
    }
    for(auto v:l){
        if(v>y){
            count=count+2;
        }
        else{
            count++;
        }
    }
    cout << count;

    return 0;
}