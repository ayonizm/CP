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

        string s; 
        int ans = 0;
        cin >> s;
        int l = s.length();
        for (int i = 0; i < l; i++)
        {
            if (s[i] == 'A')
            {
                for (int j = i + 1; j < l; j++)
                {
                    if (s[j] == 'B')
                    {
                        for (int k = j + 1; k < l; k++)
                        {
                            if (s[k] == 'C' && (j - i) == (k - j))
                            {
                                ans++;
                            }
                        }
                    }
                }
            }
        }


        cout<< ans << endl;

  


    return 0;
}