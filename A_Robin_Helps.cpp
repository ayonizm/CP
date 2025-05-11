#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while(n--){
        int x, y;
        cin >> x >> y;
        int sum = 0;
        int count = 0;
        for (int i = 0; i < x; i++)
        {
            int l;
            cin >> l;
            if(l>=y){
                sum = sum + l;
            }
            else if(l==0){
                if(sum>0){
                    count++;
                    sum--;
                }
                
            }
        }
        cout << count << endl;
    }
    return 0;
}