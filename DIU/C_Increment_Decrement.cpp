#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = 0;
    vector<int> ayon;
    ayon.push_back(x);
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='I'){
            x++;
            int temp1 = x;
            ayon.push_back(temp1);
        }
        else{
            x--;
            int temp2 = x;
            ayon.push_back(temp2);

        }
    }
    cout << *max_element(ayon.begin(), ayon.end());

    return 0;
}