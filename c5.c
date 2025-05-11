#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int ar[a][b];
    
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            scanf("%d", &ar[i][j]);
        }
    }
    
    int flag = 0;
    int yo = 0; // Initialize yo with a default value
    int found = 0;
    
    for (int i = 1; i < a - 1; i++) { // start from 1 to a-2 to avoid out-of-bounds
        for (int j = 1; j < b - 1; j++) { // start from 1 to b-2 to avoid out-of-bounds
            if (ar[i][j] == 42) {
                yo = ar[i][j];
                if (ar[i - 1][j - 1] == yo && ar[i - 1][j] == yo && ar[i - 1][j + 1] == yo &&
                    ar[i][j - 1] == yo && ar[i][j + 1] == yo &&
                    ar[i + 1][j - 1] == yo && ar[i + 1][j] == yo && ar[i + 1][j + 1] == yo) {
                    printf("%d %d\n", i + 1, j + 1);
                    found = 1;
                    break; // Exit the loop once the pattern is found
                }
            }
        }
        if (found) break;
    }
    
    if (!found) {
        printf("0 0\n");
    }

    return 0;
}
