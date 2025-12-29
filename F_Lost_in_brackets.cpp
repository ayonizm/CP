#include <iostream>
#include <string>
#include <stack>
#include <unordered_set>
#include <vector>

using namespace std;

string solve(string s)
{
    stack<int> st;                   // Stack to store indices of opening parentheses
    vector<pair<int, int>> pairs;    // Store matched parentheses pairs
    unordered_set<char> globalChars; // Characters outside all parentheses

    // First pass: Check if parentheses are balanced and find pairs
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            st.push(i);
        }
        else if (s[i] == ')')
        {
            if (st.empty())
            {
                return "NO"; // Unbalanced - closing without opening
            }
            int openIdx = st.top();
            st.pop();
            pairs.push_back({openIdx, i});
        }
    }

    // Check if all opening parentheses were matched
    if (!st.empty())
    {
        return "NO"; // Unbalanced - opening without closing
    }

    // Create a boolean array to mark characters inside parentheses
    vector<bool> insideParens(s.length(), false);
    for (auto &pair : pairs)
    {
        for (int i = pair.first; i <= pair.second; i++)
        {
            insideParens[i] = true;
        }
    }

    // Collect global characters (outside all parentheses)
    for (int i = 0; i < s.length(); i++)
    {
        if (!insideParens[i] && s[i] != '(' && s[i] != ')')
        {
            globalChars.insert(s[i]);
        }
    }

    // Check uniqueness for each pair of balanced parentheses
    for (auto &pair : pairs)
    {
        unordered_set<char> localChars = globalChars; // Start with global characters

        // Add characters between this pair of parentheses
        for (int i = pair.first + 1; i < pair.second; i++)
        {
            if (s[i] != '(' && s[i] != ')')
            {
                if (localChars.count(s[i]))
                {
                    return "NO"; // Duplicate character found
                }
                localChars.insert(s[i]);
            }
        }
    }

    return "YES";
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(); // Ignore the newline after the number

    while (t--)
    {
        string s;
        getline(cin, s);
        cout << solve(s) << endl;
    }

    return 0;
}