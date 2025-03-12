#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int q = 1;
    while (n--)
    {
        int k;
        cin >> k;
        int f = k;
        vector<pair<int, string>> x;
        while (f--)
        {
            int temp;
            cin >> temp;
            string s;
            cin >> s;
            x.push_back({temp, s});
        }
        sort(x.begin(), x.end());
        int r = 0;
        string ayon;
        for (int i = 0; i < k; i++)
        {
            r = r + i + 1;
            if(r>k){
                break;
            }
            ayon += x[r - 1].second;
            ayon += " ";
        } 
        cout << "Case " << q << ": " <<ayon << endl;
        q++;
    }
    
    return 0;
}