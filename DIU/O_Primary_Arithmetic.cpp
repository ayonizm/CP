#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    while (1)
    {
        string a, b;
        cin >> a >> b;
        if(a=="0"&&b=="0"){
            break;
        }
        // int f = min(a.length(), b.length());
        int count = 0;
        int lo = 0;
        for (int i = a.length()-1; i>=0; i--)
        {
            int k1 = a[i]-'0';
            int k2 = b[i]-'0';
            int ro = k1 + k2 + lo;
            if(ro>=10){
                count++;
                // lo = lo + (k1 + k2) - 9;
                lo = 1;
            }
            else{
                lo = 0;
            }
        }
        if(count==0){
            cout << "No carry operation." << endl;
        }
        else if(count==1){
            cout << count << " carry operation." << endl;
        }
        else{
            cout << count << " carry operations." << endl;
        }
    }
    
    return 0;
}