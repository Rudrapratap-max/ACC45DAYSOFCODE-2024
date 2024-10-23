#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read the number of test cases

    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);  // Read H, X, Y for each test case

        // Calculate the number of normal attacks needed if the special attack is not used
        int normal_attacks = (H + X - 1) / X;  // Ceiling division for normal attacks

        // Calculate the health after using the special attack
        int health_after_special = H - Y;

        // If health after special is greater than 0, calculate attacks needed
        int attacks_with_special = (health_after_special > 0) ? (health_after_special + X - 1) / X + 1 : 1;

        // Find the minimum of both strategies
        int min_attacks = normal_attacks < attacks_with_special ? normal_attacks : attacks_with_special;

        // Output the result for this test case
        printf("%d\n", min_attacks);
    }

    return 0;
}
