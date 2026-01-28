#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        int l = y-x;
        if(l>=2){
            count++;
        }
        
    }
    cout << count;

    return 0;
}