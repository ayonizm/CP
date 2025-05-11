#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    stack<char> l;
    char x;
        cin >> x;
        l.push(x);
        int count=0;
        for (int i = 0; i < n-1; i++)
        {
            cin >> x;
            if(l.top()==x){
                count++;
            }
            else{
                l.push(x);
            }
        }
        cout << count;

        return 0;
}