#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    string f = "WUB";
    string k;
    cin >> k;
    while (1)
    {
            int p = k.find(f);
        if(p!=string::npos){
            for (int i = p; i <p+3 ; i++)
            {
                k[i] = '2';
            }
            
        }
        else{
            break;
        }
    }
    for (int i = 0; i < k.size(); i++)
    {
        if(k[i]!='2'){
            cout << k[i];
        }
        if(k[i]=='2'&&k[i-1]>='A'&&k[i-1]<='Z'){
            cout << " ";
        }
    }
    
    

    return 0;
}