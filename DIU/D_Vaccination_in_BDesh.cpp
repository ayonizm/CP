#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int sum = 0;
        int a, b;
        cin >> a >> b;
        int c;
        for (int i = 0; i < a; i++)
        {
            cin >> c;
            if(c<b){
                sum = sum + c;
                continue;
            }
            sum = sum + (c % b);
        }
        cout << "Case "<< i<< ": "<<sum << endl;
    }
    
    return 0;
}