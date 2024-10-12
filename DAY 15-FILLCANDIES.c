#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, K, M; // Number of candies, pockets per bag, and maximum candies per pocket
        scanf("%d %d %d", &N, &K, &M);

        // Calculate total capacity of one bag
        int capacity_per_bag = K * M;

        // Calculate the minimum number of bags needed
        int bags_needed = (N + capacity_per_bag - 1) / capacity_per_bag; // Ceiling division

        // Output the result
        printf("%d\n", bags_needed);
    }

    return 0;
}
