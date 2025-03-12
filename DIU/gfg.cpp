#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n';
int main(){
    int n;
    cin >>n;
    int sum = 0;
    while (n!=0)
    {
        int temp = n % 10;
        sum = sum + temp;
        n = n / 10;
    }
    string s;
    s = to_string(sum);
    string temp = s;
    reverse(temp.begin(), temp.end());
    if(s==temp){
        cout << "1" << endl;
    }
    else{
        cout << "0" << endl;
    }
}