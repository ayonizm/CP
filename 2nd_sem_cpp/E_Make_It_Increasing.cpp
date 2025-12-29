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
        int a[n + 5];
        for (int i = 0; i <n; i++)
        {
            cin >> a[i];
        }
        int ay = 0;
        bool p = true;
        for (int i = n-2; i >= 0; i--)
        {
            if (a[i] >= a[i + 1])
            {
                while (a[i] >= a[i + 1])
                {
                    if (a[i] == 0)
                    {
                        p = false;
                        break;
                    }
                    a[i] /= 2;
                    ay++;
                }
                if (!p)
                {
                    ay = -1;
                    break;
                }
            }
        }
        cout << ay << endl;
    }

    return 0;
}