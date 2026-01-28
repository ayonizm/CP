#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();

    int a, b, c, d;
    int total;
    cin >> a >> b >> c >> d >> total;
    vector<int> x;
    for (int i = 1; i <=total; i++)
    {
        if(i%a==0||i%b==0||i%c==0||i%d==0){
            continue;
        }
        else{
            x.push_back(i);
        }
    }
    for(auto v:x){
        cout << v << " ";
    }
    // int f = total - x.size();
    // cout << f;

    return 0;
}