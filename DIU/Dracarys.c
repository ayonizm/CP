#include <stdio.h>
#include <stdlib.h>

int min(int x, int y) {
    return (x < y) ? x : y;
}

int max(int x, int y) {
    return (x > y) ? x : y;
}

int main() {
    int a, b, c, d;
    
    while (scanf("%d %d %d %d", &a, &b, &c, &d) != EOF) {
        int e = min(a, b);
        int f = min(c, d);
        
        e += f;
        int g = min(max(a, b), max(c, d));
        
        int h = min(e, g);
        
        printf("%d\n", h * h);
    }

    return 0;
}
