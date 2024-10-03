#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);

        // Calculate score for order A -> B
        int scoreA_first = (500 - 2 * X) + (1000 - 4 * (X + Y));
        
        // Calculate score for order B -> A
        int scoreB_first = (1000 - 4 * Y) + (500 - 2 * (X + Y));

        // Find the maximum score
        int maxScore = scoreA_first > scoreB_first ? scoreA_first : scoreB_first;

        // Output the maximum score
        printf("%d\n", maxScore);
    }

    return 0;
}
