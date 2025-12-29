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
void solve(){

}
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        map<int, int> x;
        int p = 3;
        while (p--)
        {
            int k;
            cin >> k;
            x[k]++;
        }
        if(x[1]>=2){
            cout << "Not now" << endl;
        }
        else{
            cout << "Water filling time" << endl;
        }
    }
    

    return 0;
}