#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int pr(long long int n){
    int count = 0;
    for (int i = 2; i*i <=n; i++)
    {
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    op();
    string s;
    while (cin >> s)
    {
        string k;
        long long int sum = 0;
        for (long long int i = 0; i <s.length(); i++)
        {
            
            if(islower(s[i])){
                sum += s[i] - 'a' + 1;
            }
            else if(isupper(s[i])){
                sum += s[i] - 'A' + 27;

            }

        }
        // cout << sum << endl;
        if(pr(sum)){
            cout << "It is a prime word." << endl;
        }
        else{
            cout << "It is not a prime word." << endl;
        }
        
    }
    
    return 0;
}