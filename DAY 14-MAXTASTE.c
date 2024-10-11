#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int a, b, c, d;
        // Read the tastiness values for A, B, C, D
        scanf("%d %d %d %d", &a, &b, &c, &d);

        // Calculate the possible combinations
        int maxTastiness = 0;
        maxTastiness = (a + c > maxTastiness) ? a + c : maxTastiness;
        maxTastiness = (a + d > maxTastiness) ? a + d : maxTastiness;
        maxTastiness = (b + c > maxTastiness) ? b + c : maxTastiness;
        maxTastiness = (b + d > maxTastiness) ? b + d : maxTastiness;

        // Output the maximum tastiness
        printf("%d\n", maxTastiness);
    }

    return 0;
}
