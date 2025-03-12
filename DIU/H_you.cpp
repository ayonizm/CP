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
    
    while (1)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a==0&&b==0&&c==0){
            break;
        }
        if (a * a == b * b + c * c)
        {
            cout << "right"<<endl;
        } 
        else if (b * b == a * a + c * c)
        {
            cout << "right"<<endl;
        }
        else if (c * c == a * a + b * b)
        {
            cout << "right"<<endl; 
        }
        else
        {
            cout << "wrong"<<endl; 
        }
    }
    

    return 0;
}