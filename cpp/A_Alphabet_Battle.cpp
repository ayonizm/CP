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
    char a, b;
    cin >> a >> b;
    if(a<b){
        cout << "The First Alphabet Takes the Crown!" << endl;
    }
    else if(a>b){
        cout << "The Second Alphabet Takes the Crown!" << endl;
    }
    else{
        cout << "Draw!" << endl;
    }
    return 0;
}