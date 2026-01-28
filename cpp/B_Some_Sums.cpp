#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int a, b, c;
    cin >> a >> b >> c;
    int sum = 0;
    for (int i = 1; i <= a; i++)
    {
        string s = to_string(i);
        int cp = 0;
        for (int i = 0; i < s.length(); i++)
        {
            cp = cp + (s[i] - '0');
        }
        if(cp>=b&&cp<=c){
            sum = sum + i;
        }
    }
    cout << sum;

    return 0;
}