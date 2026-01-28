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
        string s;
        cin >> s;
        long long int k = stoi(s);
        int count = 0;
        for (int i = 0; i < s.length(); i++)
        {
            long long l = s[i] - '0';
            if(l!=0&&k%l==0){
                count++;
            }
        }
        cout << count << endl;
    }
    

    return 0;
}