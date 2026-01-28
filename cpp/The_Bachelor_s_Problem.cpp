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
    int rt = 1;
    while (n--)
    {
        cout << "Case " << rt++ << ": ";
        int ar[6];
        int sum = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> ar[i];
            sum += ar[i];
        }
        int p;
        cin >> p;
        int arr[6];
        int sum2 = 0;
        for (int i = 0; i < 6; i++)
        {
            cin >> arr[i];
            sum2 += arr[i];
        }
        if(p>=sum){
            int k1 = sum2 - (p - sum);
            if(k1<0){
                k1 = 0;
            }
            cout<< k1 << endl;
        }
        else{
            int k2 = sum2 + (sum - p);
            if(k2<0){
                k2 = 0;
            }
            cout<< k2 << endl;
        }

    }
    

    return 0;
}