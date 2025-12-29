#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {

        int k;
        cin >> k;
        
        map<string, int> c;
        string e;
        string j;
        int p = 0;
        while (k--)
        {
        string s;
        cin >> s;
        if(p==0){
            e = s;
            p++;
        }
        if(s!=e){
            j = s;
        }
        c[s]++;
        }
        if(c[e]==c[j]){
            cout << "Draw" << endl;
        }
        else if(c[e]>c[j]){
            cout << e << endl;
        }
        else{
            cout << j << endl;
        }

        
    }
    

    return 0;
}