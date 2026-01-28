#include <bits/stdc++.h>
using namespace std;
#define op()                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define endl "\n"
#define ll long long int
const int mm = 1e6;
int main()
{
    int n;
    cin >> n;
    vector<int> ay(mm + 1, 0);
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
        ay[nums[i]]++;
    }
    for (int g = mm; g >= 1; g--)
    {
        int count = 0;
        for (int i = g; i <= mm; i += g)
        {
            count += ay[i];
            if (count >= 2)
                break;
        }
        if (count >= 2)
        {
            cout << g << endl;
            return 0;
        }
    }

    return 0;
}
