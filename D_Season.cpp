#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long int
int main(){
    op();
    int month;
    cin >> month;

    if (month >= 3 && month <= 5)
    {
        cout << "Spring" << endl;
    }
    else if (month >= 6 && month <= 8)
    {
        cout << "Summer" << endl;
    }
    else if (month >= 9 && month <= 11)
    {
        cout << "Autumn" << endl;
    }
    else
    {
        cout << "Winter" << endl;
    }
    return 0;
}