#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int main(){
    op();
    int n;
    cin >> n;
    map<string, int>x;
    while (n--)
    {
       
        string s;
        int num;
        cin >> num;
        cin >> s;
        if(num==1){
            
            long long int temp;
            cin >> temp;
          
            x[s] = x[s]+temp;
        }
        else if(num==2){
            x.erase(s);
        }
        else if(num==3){
            cout << x[s] << endl;
        }
    }
    
    return 0;
}