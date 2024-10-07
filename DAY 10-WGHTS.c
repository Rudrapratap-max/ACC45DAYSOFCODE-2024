#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int W, X, Y, Z;
        scanf("%d %d %d %d", &W, &X, &Y, &Z);

        // Check all combinations of the weights
        int found = 0;

        // Check using each single weight
        if (W == X || W == Y || W == Z) {
            found = 1;
        }
        
        // Check using pairs of weights
        if ((X + Y == W) || (X + Z == W) || (Y + Z == W)) {
            found = 1;
        }
        
        // Check using all three weights
        if (X + Y + Z == W) {
            found = 1;
        }

        // Output the result
        if (found) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }

    return 0;
}
