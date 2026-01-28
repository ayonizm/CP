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
    int x;
    cin >> x;
    vector<int> l;
    while (x--)
    {
        int p;
        cin >> p;
        l.push_back(p);

    }
    int k1 = *max_element(l.begin(), l.end());
    int k2 = *min_element(l.begin(), l.end());
    int ct = 0;
    int f = 0;
    for (int i = 0; i < l.size(); i++)
    {
        if(l[i]==k1&&f<1){
            l[i] = -1;
            f++;
        }
    }
    int r = 0;
    for (int i = l.size()-1; i >= 0; i--)
    {
        if(l[i]==k2&&r<1){
            r++;
        }
        else{

            l[i] = -2;
        }
    }
    for(auto v:l){
        cout << v << endl;
    }
    
    // while (1)
    // {
    //     if(l[0]==k1&&l[l.size()-1]==k2){
    //         break;
    //     }
    //     for (int i = 0; i < l.size(); i++)
    //     {
    //         if(l[i]==k1){
    //             swap(l[i], l[i - 1]);
    //             ct++;
    //             break;
    //         }
    //     }
    //     for (int i = 0; i < l.size(); i++)
    //     {
    //         if(l[i]==k2){
    //             swap(l[i], l[i + 1]);
    //             ct++;
    //             break;
    //         }
    //     }
        
    // }
    // cout << ct << endl;

    return 0;
}