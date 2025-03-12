#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int c;
    cin >> c;
    
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
    sort(l.begin(), l.end());
    cout << l[l.size() - 2];

    return 0;
}