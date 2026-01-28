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
    int x, y;
    cin >> x >> y;
    if(x==2||y==2){
        cout << "No" << endl;
        return 0;
    }
    if ((x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 10 || x == 12) && (y == 1 || y == 3 || y == 5 || y == 7 || y == 8 || y == 10 || y == 12))
    {
        printf("Yes\n");
    }
    else if ((x == 4 || x == 6 || x == 9 || x == 11 )&& (y == 4 || y == 6 || y == 9 || y == 11))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}