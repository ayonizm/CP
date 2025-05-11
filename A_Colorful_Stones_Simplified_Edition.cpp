#include<bits/stdc++.h>
using namespace std;
#define op() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main(){
    op();
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    int count = 1;
    int k = 0;
    for (int i = 0; i < s2.length(); i++)
    {
        if (s1[k]==s2[i]){
            count++;
            k++;
        }
   }
   cout << count;
   return 0;
}