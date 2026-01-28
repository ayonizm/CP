#include <bits/stdc++.h>
#define int long long
using namespace std;

const int N = 2e5 + 5;
int c[N], m, x;

void work()
{
    priority_queue<int> pq;
    cin >> m; // Read number of elements for the current test case
    int p = 0, ans = 0;

    // Read the values for the current test case
    for (int i = 1; i <= m; i++)
    {
        cin >> c[i];   // Read each element
        pq.push(c[i]); // Push to the priority queue
        p = p - c[i];  // Update p (consider the logic here)

        // Process the priority queue if the condition is met
        while (!pq.empty() && p <= x)
        {
            p += pq.top(); // Get the largest element from the queue
            pq.pop();      // Remove the largest element
        }
        p += x; // Adjust p based on the value of x
    }

    cout << pq.size() << "\n"; // Output the result, size of the queue
}

signed main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        work(); // Run the function for each test case
    }

    return 0;
}
