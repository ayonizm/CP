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

#include <bits/stdc++.h>
using namespace std;

int findMin(vector<int> &arr)
{
    int low = 0, high = arr.size() - 1;
    int ans = INT_MAX;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[low] <= arr[high])
        {
            ans = min(ans, arr[low]);
            break;
        }

        // if left part is sorted:
        if (arr[low] <= arr[mid])
        {
            // keep the minimum:
            ans = min(ans, arr[low]);

            // Eliminate left half:
            low = mid + 1;
        }
        else
        { // if right part is sorted:

            // keep the minimum:
            ans = min(ans, arr[mid]);

            // Eliminate right half:
            high = mid - 1;
        }
    }
    return ans;
}

int rotated_bin(vector<int>&x,int n,int tar){
    int lo = 0;
    int hi = n-1;
    while (lo<=hi)
    {
        int mid = (hi + lo) / 2;
        if(x[mid]==tar){
            return mid;
        }
        else if(x[lo]<=x[mid]){
            if(x[lo]<=tar&&tar<=x[mid]){
                hi = mid-1;
            }
            else{
                lo = mid + 1;
            }
        }
        else{
            if (x[mid] <= tar && tar <= x[hi])
            {
                lo = mid +1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    op();
    ll n;
    cin >> n;
    int k = n;
    vector<int> x;
    while (n--)
    {
        int k;
        cin >> k;
        x.push_back(k);
    }
    int tar;
    cin >> tar;
    cout << rotated_bin(x, k, tar);

    return 0;
}