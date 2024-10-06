#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        long long X, Y;
        scanf("%lld %lld", &X, &Y); // Read the rental cost (X) and purchase cost (Y)

        if (X >= Y) {
            // If renting cost per month is greater than or equal to purchase cost
            printf("0\n");
        } else {
            // Calculate the maximum number of months
            long long max_months = (Y - 1) / X; // (Y - 1) / X gives the maximum full months
            printf("%lld\n", max_months);
        }
    }

    return 0;
}
