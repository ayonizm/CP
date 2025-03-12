#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin>>n;
    while (n--)
    {
        int x;
        cin >> x;
        string s;
        cin >> s;
        int l = s.find("B");
        int k = s.rfind("B");
        int count = 0;
        for (int i = l; i < k; i++)
        {
            count++;
        }
        cout << count+1 << endl;
    }
    
    return 0;
}