#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int x, y;
    scanf("%d %d", &x, &y);
    while (x!=0&&y!=0)
    {
        if(x>y){
            x %= y;
        }
        else{
            y %= x;
        }
    }
    cout << max(x, y) << endl;
    return 0;
}