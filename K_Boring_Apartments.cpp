#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define Yes cout << "Yes\n"
#define YES cout << "YES\n"
#define yes cout << "yes\n"
#define No cout << "No\n"
#define NO cout << "NO\n"
#define no cout << "no\n"
#define ll long long int
int main(){
    op();
    vector<string> x = {"1", "11", "111", "1111", "2", "22", "222", "2222", "3", "33", "333", "3333", "4", "44", "444", "4444", "5", "55", "555", "5555", "6", "66", "666", "6666", "7", "77", "777", "7777", "8", "88", "888", "8888", "9", "99", "999", "9999"};
    ll n;
    cin >> n;
    while (n--)
    {
        string s;
        cin>>s;
        int sum = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if(s==x[i]){
                sum += x[i].size();
                break;
            }
            sum+=x[i].size();
        }
        cout << sum << endl;
    }
    

    return 0;
}