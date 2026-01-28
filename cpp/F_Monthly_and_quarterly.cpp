#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int month;
    cin >> month;

    if (month >= 1 && month <= 3)
    {
        cout << "First" << endl;
    }
    else if (month >= 4 && month <= 6)
    {
        cout << "Second" << endl;
    }
    else if (month >= 7 && month <= 9)
    {
        cout << "Third" << endl;
    }
    else
    {
        cout << "Fourth" << endl;
    }
    return 0;
}