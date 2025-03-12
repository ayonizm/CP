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
int gp = 0;
void update(int k){
    if(k>gp){
        gp = k;
    }

}
int main(){
    op();
    int k = 4;
    while (k--)
    {
        int a;
        cin >> a;
        update(a);
    }
    cout << gp << endl;

    return 0;
}