#include <stdio.h>

int main() {
    int n;
    while (scanf("%d", &n) != EOF) {
        if (n == 0) {
            break;
        }

        int ar[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &ar[i]);
        }

        int x;
        scanf("%d", &x);

        for (int i = x; i <= n; i++) {
            if (ar[i-1] == i) {
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;
}
