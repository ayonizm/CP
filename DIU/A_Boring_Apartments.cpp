#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    while (n--)
    {
        int tar;
        cin >> tar;
        vector<int> x;
        for (int i = 1; i <= 9; i++)
        {
            x.push_back(i);
            for (int j = 1; j <= 3; j++)
            {
                int temp = (i * pow(10, j)) + x[x.size() - 1];
                x.push_back(temp);
            }
            
        }
        int sum = 0;
        for (int i = 0; i < x.size(); i++)
        {
            string s = to_string(x[i]);
            sum = sum + s.length();
            if(x[i]==tar){
                break;
            }
        }
        cout << sum << endl;
    }
    
    return 0;
}