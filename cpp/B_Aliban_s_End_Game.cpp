// #include <bits/stdc++.h>
// using namespace std;
// #define op()                      \
//     ios_base::sync_with_stdio(0); \
//     cin.tie(0);                   \
//     cout.tie(0);
// #define test(t) \
//     int t;      \
//     cin >> t;   \
//     while (t--)
// #define MOD 1000000007
// #define MOD1 998244353
// #define endl "\n"
// #define pb push_back
// #define mp make_pair
// #define ff first
// #define ss second
// #define all(vec) vec.begin(), vec.end()
// #define PI 3.141592653589793238462
// #define debug(x) cout << #x << " " << x << endl;
// #define ll long long int
// string mr(string str)
// {
//     int n = str.length();
//     string arr[n];
//     string concat = str + str;
//     for (int i = 0; i < n; i++){
//         arr[i] = concat.substr(i, n);
//     }
//     sort(arr, arr + n);
//     return arr[0];
// }

ll lis(vector<ll> &x)
{
    vector<ll> vec;
    for (auto v : x)
    {
        auto it = lower_bound(all(vec), v);
        if (it == vec.end())
        {
            vec.pb(v);
        }
        else
        {
            *it = v;
        }
    }
    return vec.size();
}
// void solve()
// {
//     ll n;
//     cin >> n;
//     string p = "";
//     for (int i = 0; i < n; i++)
//     {
//         string t;
//         cin >> t;
//         p += t;
//     }
//     string pr = mr(p);
//     vector<ll> x;
//     for(auto v:pr){
//         x.pb(v - '0');
//     }
//     ll ls = lis(x);
//     cout << ls << endl;
//     // debug(pr);
// }
// int main()
// {
//     op();
//     // test(t){
//     solve();
//     // }
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

vector<int> lexicographically_minimal_rotation(const vector<int> &P, int N)
{
    // Concatenate P with itself to simulate rotations
    vector<int> P_extended = P;
    P_extended.insert(P_extended.end(), P.begin(), P.end());

    vector<int> min_rotation = P;
    int min_idx = 0;

    // Compare all rotations
    for (int i = 0; i < N; ++i)
    {
        vector<int> rotation(P_extended.begin() + i, P_extended.begin() + i + N);
        if (rotation < min_rotation)
        {
            min_rotation = rotation;
            min_idx = i;
        }
    }

    return min_rotation;
}

int longest_increasing_subsequence(const vector<int> &Q, int N)
{
    // dp[i] stores the smallest value that ends an increasing subsequence of length i+1
    vector<int> dp;

    for (int num : Q)
    {
        // Binary search to find the position to insert num
        auto it = lower_bound(dp.begin(), dp.end(), num);
        if (it == dp.end())
        {
            dp.push_back(num);
        }
        else
        {
            *it = num;
        }
    }

    return dp.size();
}
int ld(const vector<int> &Q, int N)
{
    vector<int> dp;

    for (int num : Q)
    {
        // Binary search to find the position to insert num for decreasing sequence
        auto it = lower_bound(dp.begin(), dp.end(), num, greater<int>());
        if (it == dp.end())
        {
            dp.push_back(num);
        }
        else
        {
            *it = num;
        }
    }

    return dp.size();
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Read input
    int N;
    cin >> N;
    vector<int> P(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> P[i];
    }

    // Find lexicographically minimal rotation
    vector<int> Q = lexicographically_minimal_rotation(P, N);

    // Find LIS of Q
    int result = longest_increasing_subsequence(Q, N);
    int pesult = ld(Q, N);

    // Output the result
    cout << max(result,pesult) << '\n';

    return 0;
}