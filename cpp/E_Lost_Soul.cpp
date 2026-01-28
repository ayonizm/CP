#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n + 1), b(n + 1);
        for (int i = 1; i <= n; i++)
            cin >> a[i];
        for (int i = 1; i <= n; i++)
            cin >> b[i];

        int maxMatches = 0;
        // Try all possible indices to remove (including not removing)
        for (int remove = 0; remove <= n; remove++)
        {
            vector<int> a_copy = a, b_copy = b;
            if (remove)
            {
                a_copy.erase(a_copy.begin() + remove);
                b_copy.erase(b_copy.begin() + remove);
                n--;
            }

            // Try all permutations of operations
            vector<int> a_curr = a_copy, b_curr = b_copy;
            int matches = 0;
            for (int i = 1; i <= n; i++)
            {
                if (a_curr[i] == b_curr[i])
                    matches++;
            }
            maxMatches = max(maxMatches, matches);

            // Simulate operations
            for (int i = 1; i < n; i++)
            {
                vector<int> a_next = a_curr, b_next = b_curr;
                a_next[i] = b_curr[i + 1];
                b_next[i] = a_curr[i + 1];
                int new_matches_a = 0, new_matches_b = 0;
                for (int j = 1; j <= n; j++)
                {
                    if (a_next[j] == b_next[j])
                        new_matches_a++;
                    if (a_curr[j] == b_next[j])
                        new_matches_b++;
                }
                maxMatches = max({maxMatches, new_matches_a, new_matches_b});
                a_curr = a_next;
                b_curr = b_next;
            }
        }
        cout << maxMatches << endl;
    }
    return 0;
}