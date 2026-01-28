#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    long long ar[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%lld", &ar[i]);
    }
    
    for (int i = 0; i < n - 1; i++) {
        if (ar[i] > ar[i + 1]) {
            printf("%d\n", i + 2); 
            return 0;
        }
    }

    printf("0\n");
    
    return 0;
}
