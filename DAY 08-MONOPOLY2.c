#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int P, Q, R, S;
        scanf("%d %d %d %d", &P, &Q, &R, &S); // Read the profits

        // Calculate the total profit of the other companies
        int total = Q + R + S;
        
        // Check if company A has monopoly
        if (P > total) {
            printf("YES\n");
            continue;
        }

        // Check if company B has monopoly
        total = P + R + S;
        if (Q > total) {
            printf("YES\n");
            continue;
        }

        // Check if company C has monopoly
        total = P + Q + S;
        if (R > total) {
            printf("YES\n");
            continue;
        }

        // Check if company D has monopoly
        total = P + Q + R;
        if (S > total) {
            printf("YES\n");
            continue;
        }

        // If no company has monopoly
        printf("NO\n");
    }

    return 0;
}
