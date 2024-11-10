#include <stdio.h>
#include <math.h> // for ceil()

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N, X;
        scanf("%d %d", &N, &X);
        
        int H[N];
        for (int i = 0; i < N; i++) {
            scanf("%d", &H[i]);
        }
        
        // Single-Target Mode: Calculate time to kill all enemies
        int singleTargetTime = 0;
        for (int i = 0; i < N; i++) {
            singleTargetTime += (int) ceil((double) H[i] / X);
        }
        
        // Multi-Target Mode: Calculate the maximum health of the enemies
        int multiTargetTime = 0;
        for (int i = 0; i < N; i++) {
            if (H[i] > multiTargetTime) {
                multiTargetTime = H[i];
            }
        }
        
        // Output the minimum time required to kill all enemies
        if (singleTargetTime < multiTargetTime) {
            printf("%d\n", singleTargetTime);
        } else {
            printf("%d\n", multiTargetTime);
        }
    }

    return 0;
}
