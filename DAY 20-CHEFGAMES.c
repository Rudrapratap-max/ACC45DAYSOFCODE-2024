#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);
    
    for (int i = 0; i < T; i++) {
        int R1, R2, R3, R4; // Decisions from referees
        scanf("%d %d %d %d", &R1, &R2, &R3, &R4);
        
        // Check if all referees consider the ball to be IN (0)
        if (R1 == 0 && R2 == 0 && R3 == 0 && R4 == 0) {
            printf("IN\n");
        } else {
            printf("OUT\n");
        }
    }

    return 0;
}
