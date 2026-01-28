#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x, n;
    cin >> x >> n;
    set<int> s;
    s.insert(0); // start of the street
    s.insert(x); // end of the street

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> result;
    int max_gap = 0;

    // Initially calculate the maximum gap
    for (auto it = s.begin(), next = ++s.begin(); next != s.end(); it++, next++)
    {
        max_gap = max(max_gap, *next - *it);
    }

    result.push_back(max_gap);

    // Insert traffic lights and calculate the maximum gap after each insertion
    for (int i = 0; i < n; i++)
    {
        s.insert(v[i]);
        max_gap = 0;

        // Recalculate the maximum gap after inserting a traffic light
        for (auto it = s.begin(), next = ++s.begin(); next != s.end(); it++, next++)
        {
            max_gap = max(max_gap, *next - *it);
        }

        result.push_back(max_gap);
    }

    // Output the results
    for (int r : result)
    {
        cout << r << " ";
    }
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    solve();
    return 0;
}
