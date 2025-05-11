#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        x.push_back(temp);
    }
    int even = 0;
    int odd = 0;
    for (int i = 0; i < n; i++)
    {
        if(x[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    // cout << even << endl;
    if(odd%2==0){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}