#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int cor1, cor2, ayon1, ayon2, r;
    cin >> cor1 >> cor2 >> ayon1 >> ayon2 >> r;
    if ((ayon1 - r >= 0) && (ayon1 + r <= cor1) && (ayon2 - r >= 0) && (ayon2 + r <= cor2)) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}