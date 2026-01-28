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
    vector<int> x;
    vector<int> l;
    while (n--)
    {
        int p;
        cin >> p;
        if(p%2==0){

            x.push_back(0);
        }
        else{
            x.push_back(1);
        }
        l.push_back(p);
    }
    int ct1 = 0;
    int ct2 = 0;
    for (int i = 0; i < x.size(); i++)
    {
        if(x[i]==0){
            ct1++;
        }
        else{
            ct2++;
        }
    }
    if(ct1==1){
        for (int i = 0; i < l.size(); i++)
        {
            if(l[i]%2==0){
                cout << i + 1 << endl;
                return 0;
            }
        }
        
    }
    else{
        for (int i = 0; i < l.size(); i++)
        {
            if (l[i] % 2 == 1)
            {
                cout << i + 1 << endl;
                return 0;
            }
        }
    }
    
    

    return 0;
}