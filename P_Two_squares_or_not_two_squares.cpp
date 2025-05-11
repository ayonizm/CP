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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int x = (sqrt(n));
        if (x * x == n)
        {
            Yes;
        }
        else
        {
            bool flag = false;

            for (int i = 1; i * i <= n; ++i)
            {
                x = sqrt(n - i * i);

                if (x * x == n - i * i)
                {
                    flag = true;
                    break;
                }
            }
            flag ? Yes : No;
        }
    }

    return 0;
}