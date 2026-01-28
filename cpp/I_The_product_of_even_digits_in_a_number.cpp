#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s;
    cin >> s;
    long long int sum = 1;
    int flag = 0;
    for (int i = 0; i < s.length(); i++)
    {
        int a = s[i] - '0';
        if(a%2==0){
            sum *= a;
            flag = 1;
        }
    }
    if(sum==1&&flag==1){
        cout << "0" << endl;
    }
    else if (sum == 1 && flag==0){
        cout << "-1" << endl;
    }
    else{
        cout << sum << endl;
    }

        return 0;
}