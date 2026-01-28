#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"

int main() {
    op();
    string ayon;
    cin >> ayon;

    int count = 1;  
    int flag = 1;

    for (int i = 1; i < ayon.length(); i++) {
        if (ayon[i] == ayon[i - 1]) {
            count++;
            if (count == 7) { 
                flag = 0; 
                break; 
            }
        } else {
            count = 1;
        }
    }

    if (flag==0) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
