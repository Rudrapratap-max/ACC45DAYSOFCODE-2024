#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases

    while (T--) {
        int N, M;
        scanf("%d %d", &N, &M);  // Read N and M
        
        int A[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);  // Read the elements of array A
        }

        long long total_distance = 0;
        for (int i = 0; i < N; i++) {
            int dist1 = abs(A[i] - 1);
            int distM = abs(A[i] - M);
            total_distance += (dist1 > distM) ? dist1 : distM;  // Maximize the distance for each A[i]
        }

        printf("%lld\n", total_distance);  // Output the total distance for this test case
    }

    return 0;
}
