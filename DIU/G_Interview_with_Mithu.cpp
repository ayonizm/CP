#include <bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

int main() {
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;

    string vai = ""; 
    int i = 0;

    for (int i = 0; i < n;)
    {
        if (s.substr(i, 3) == "oco") {
            
            int j = i + 3;
            while (j + 1 < n && s.substr(j, 2) == "co") {
                j += 2;
            }
            
            vai += "***";
            
            i = j;
        } else {
            
            vai += s[i];
            i++;
        }
    
    }
    
        
        

    cout << vai << endl;
    return 0;
}
