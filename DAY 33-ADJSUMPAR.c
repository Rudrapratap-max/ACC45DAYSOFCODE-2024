#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Size of the array B
        scanf("%d", &N);

        int count_ones = 0; // To count the number of 1's in B
        for (int i = 0; i < N; i++) {
            int b;
            scanf("%d", &b);
            if (b == 1) {
                count_ones++;
            }
        }

        // If the number of 1's is even, we can construct a valid A, otherwise we cannot
        if (count_ones % 2 == 0) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
