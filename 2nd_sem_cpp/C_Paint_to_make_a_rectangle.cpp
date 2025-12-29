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
    ll h, w;
    cin >> h >> w;
    vector<string> gg(h);
    for (ll i = 0; i < h; i++){

        cin >> gg[i];
    }

    ll tp = h, bt = -1, lf = w, rt = -1;

    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (gg[i][j] == '#')
            {
                if (i < tp){

                    tp = i;
                }
                if (i > bt){

                    bt = i;
                }
                if (j < lf){

                    lf = j;
                }
                if (j > rt){

                    rt = j;
                }
            }
        }
    }

    for (ll i = 0; i < h; i++)
    {
        for (ll j = 0; j < w; j++)
        {
            if (i >= tp && i <= bt && j >= lf && j <= rt)
            {
                if (gg[i][j] == '.')
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
            else
            {
                if (gg[i][j] == '#')
                {
                    cout << "No" << endl;
                    return 0;
                }
            }
        }
    }

    cout << "Yes" << endl;

    return 0;
}