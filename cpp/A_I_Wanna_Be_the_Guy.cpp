#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    int a, b;
    cin >> a;
    map<int, int> l;
    for (int i = 0; i < a; i++)
    {
        int temp;
        cin >> temp;
        l[temp]++;
    }
    cin >> b;
    for (int i = 0; i < b; i++)
    {
        int temp;
        cin >> temp;
        l[temp]++;
    }
    int flag = 1;
    for (int i = 1; i <= n; i++)
    {
        if(l[i]==0){
            flag = 0;
            break;
        }
    }
    if(flag){
        cout << "I become the guy." << endl;
    }
    else{
        cout << "Oh, my keyboard!" << endl;
    }

    return 0;
}