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
    int n;
    cin >> n;
    int arr[n];
    int amin = 0, amax = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] <= arr[amin])
        {
            amin = i;
        }
        if (arr[i] > arr[amax])
        {
            amax = i;
        }
    }
    int c = n - amin - 1 + amax;
    if (amin < amax)
    {
        c--;
    }
    cout << c;

    return 0;
}