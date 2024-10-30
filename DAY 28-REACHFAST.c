#include <stdio.h>
#include <stdlib.h> // For abs()

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int A, B, K;
        scanf("%d %d %d", &A, &B, &K);
        
        // Calculate the distance
        int distance = abs(A - B);
        
        // Calculate the minimum number of steps required
        int steps = (distance + K - 1) / K;
        
        // Print the result for the current test case
        printf("%d\n", steps);
    }

    return 0;
}
