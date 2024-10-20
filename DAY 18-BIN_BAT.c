#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T); // Read number of test cases

    while (T--) {
        int N, A, B;
        scanf("%d %d %d", &N, &A, &B); // Read N, A, B

        // Calculate the number of rounds
        int rounds = log2(N);
        
        // Total time calculation
        int total_time = rounds * A; // Time taken for all rounds
        total_time += (rounds - 1) * B; // Time taken for breaks (only between rounds)

        // Print the result for the current test case
        printf("%d\n", total_time);
    }

    return 0;
}
