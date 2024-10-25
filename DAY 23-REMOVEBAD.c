#include <stdio.h>
#include <stdlib.h>

#define MAX_N 100005

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int *A = (int *)malloc(N * sizeof(int));
        int count[MAX_N] = {0}; // to count occurrences of each number
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
            count[A[i]]++; // count occurrences
        }
        
        int maxCount = 0;
        for (int i = 1; i <= N; i++) {
            if (count[i] > maxCount) {
                maxCount = count[i]; // find maximum count
            }
        }
        
        // Minimum operations to make all elements the same
        int minOperations = N - maxCount;
        printf("%d\n", minOperations);
        
        free(A); // Free the allocated memory
    }
    
    return 0;
}
