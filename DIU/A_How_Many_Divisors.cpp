#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    int count = 0;
    vector<int> l;
    for (int i = 1; i*i <=c; i++)
    {
        
        if(c%i==0){
            l.push_back(i);
            if(c/i!=i){
            l.push_back(c / i);
            }
        }
    }
    for (int i = 0; i < l.size(); i++)
    {
        if(l[i]>=a&&l[i]<=b){
            count++;
        }
    }
    cout << count << endl;

    return 0;
}