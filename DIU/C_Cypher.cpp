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
        int a;
        cin >> a;
        vector<int> x1;
        for (int i = 0; i < a; i++)
        {
            int temp;
            cin >> temp;
            x1.push_back(temp);
        }
        for (int i = 0; i < a; i++)
        {
            int a1;
            cin >> a1;
            string s;
            cin >> s;
            for (int j = 0; j < a1; j++)
            {
                if(s[j]=='D'){
                    x1[i]++;
                }
                else{
                    x1[i]--;
                }
                if(x1[i]>9){
                    x1[i] = 0;
                }
                else if(x1[i]<0){
                    x1[i] = 9;
                }
            }
            
        }
        for(auto v:x1){
            cout << v << " ";
        }
        cout << endl;
    }
    
    return 0;
}