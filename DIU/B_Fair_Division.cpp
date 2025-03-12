#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        if(x%2!=0){
            cout << "NO" << endl;
            continue;
        }
        
        map<int, int> l;
        int sum = 0;
        for (int i = 0; i < x; i++)
        {
            int t;
            cin >> t;
            sum += t;
            l[t]++;
        }
        if(l[1]>0&&l[2]==0||l[2]>0&&l[1]==0||sum%2==0){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    
    return 0;
}