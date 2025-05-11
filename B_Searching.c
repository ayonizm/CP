#include <stdio.h>

int main()
{
    int n, x, ans = -1;  // Declare variables
    scanf("%d", &n);     // Read the number of elements in the array
    int ar[n];           // Declare an array of size n

    // Read n elements into the array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    scanf("%d", &x);  // Read the integer to search for

    // Search for x in the array
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == x)
        {
            ans = i;  // If found, store the index
            break;    // Exit the loop
        }
    }

    printf("%d", ans);  // Print the result

    return 0;
}
