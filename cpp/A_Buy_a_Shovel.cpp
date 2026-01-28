#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n, f;
    cin >> n >> f;
    int t = n;
    int count = 0;
    while (1)
    {
        count++;
        if(n%10==0||n%10==f){
            break;
        }
        else{
            n = n + t;
        }
    }
    cout << count << endl;

    return 0;
}