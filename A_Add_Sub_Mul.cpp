#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define test(t) \
    int t;      \
    cin >> t;   \
    while (t--)
#define MOD 1000000007
#define MOD1 998244353
#define endl "\n"
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(vec) vec.begin(), vec.end()
#define PI 3.141592653589793238462
#define debug(x) cout << #x << " " << x << endl;
#define ll long long int
bool bin(int l, int r, vector<int> &x, int tar)
{
    int mid = (l + r) / 2;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (x[mid] == tar)
        {
            return true;
        }
        else if (x[mid] > tar)
        {
            r = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }
    return false;
}
void bouble_sort(vector<int> &x)
{
    for (int i = 0; i < x.size(); i++)
    {
        bool ok = false;
        for (int j = 0; j < x.size() - i - 1; j++)
        {
            if (x[j + 1] < x[j])
            {
                swap(x[j + 1], x[j]);
                ok = true;
            }
        }
        // optimised
        if (!ok)
        {
            break;
        }
    }
    for (auto v : x)
    {
        cout << v << " ";
    }
}
void insertion_sort(vector<int> &x)
{
    for (int i = 1; i < x.size() - 1; i++)
    {
        int key = x[i];
        int j = i - 1;
        while (j >= 0 && key < x[j])
        {
            x[j + 1] = x[j];
            j--;
        }
        x[j + 1] = key;
    }
    for (auto v : x)
    {
        cout << v << " ";
    }
}
void selection_sort(vector<int> &x)
{
    int i, j, k, l, max_idx, min_idx;
    for (i = 0, k = x.size() - 1 - i; i < k; i++, --k)
    {
        min_idx = i;
        max_idx = k;
        for (j = i + 1; j <= k; j++)
        {
            if (x[j] < x[min_idx])
                min_idx = j;
        }
        for (j = i + 1; j <= k; j++)
        {
            if (x[j] > x[max_idx])
                max_idx = j;
        }
        swap(x[min_idx], x[i]);
        swap(x[max_idx], x[k]);
    }
    for (auto v : x)
    {
        cout << v << " ";
    }
}

// quick sort
int parti(vector<int> &x, int start, int end)
{
    int pivot = x[end];
    int i = start - 1;
    for (int j = start; j < end; j++)
    {
        if (x[j] < pivot)
        {
            i++;
            swap(x[i], x[j]);
        }
    }
    i++;
    swap(x[i], x[end]);
    return i;
}
void quicksort(vector<int> &x, int start, int end)
{
    if (end <= start)
    {
        return;
    }
    int pivot = parti(x, start, end);
    quicksort(x, start, pivot - 1);
    quicksort(x, pivot + 1, end);
}

// merge sort
void merge(vector<int> &arr, int left,
           int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back
    // into arr[left..right]
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            arr[k] = L[i];
            i++;
        }
        else
        {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1)
    {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of R[],
    // if there are any
    while (j < n2)
    {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(vector<int> &arr, int left, int right)
{
    if (left >= right)
        return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}
void solve()
{
    int n;
    cin >> n;
    vector<int> x;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        x.pb(t);
    }
    // int target;
    // cin >> target;
    // if(bin(0,x.size()-1,x,target)){
    //     cout << "paisi" << endl;
    // }
    // else{
    //     cout << "painai" << endl;
    // }
    // bouble_sort(x);
    // insertion_sort(x);
    selection_sort(x);
}
int main()
{
    op();
    // test(t){
    solve();
    // }
    return 0;
}