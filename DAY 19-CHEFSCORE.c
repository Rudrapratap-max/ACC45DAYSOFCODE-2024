#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int N, X, Y;
        scanf("%d %d %d", &N, &X, &Y); // Read N, X, and Y

        // Calculate the maximum score Chef can achieve
        int maxScore = N * X;

        // Check if Y is achievable
        if (Y <= maxScore && Y % X == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
