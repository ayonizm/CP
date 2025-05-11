#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
bool ok(int x,int y,int z,int d,int i){
    int s = (x * (i * i)) + (y * i) + z;
    if(s%d==0){
        return true;
    }
    else{
        return false;
    }
}
int main(){
    op();
    while (1)
    {
        int a, b, c, div, limit;
        cin >> a >> b >> c >> div >> limit;
        if(a==0&&b==0&&c==0&&div==0&&limit==0){
            break;
        }
        int count = 0;
        for (int i = 0; i <= limit; i++)
        {
            if(ok(a, b, c, div, i)){
                count++;
            }
        }
        cout << count << endl;
        
    }
    
    return 0;
}