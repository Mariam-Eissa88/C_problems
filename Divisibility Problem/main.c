#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int a, b;
        scanf("%d %d", &a, &b);

        int steps = (a % b == 0) ? 0 : (b - (a % b));
        printf("%d\n", steps);
    }

    return 0;
}