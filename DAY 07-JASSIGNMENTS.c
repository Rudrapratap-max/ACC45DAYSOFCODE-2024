#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); // Read the number of test cases

    while (T--) {
        int X;
        scanf("%d", &X); // Read the starting time

        // He has to finish by 10 PM and needs 3 hours to complete the assignments
        if (X <= 7) {
            printf("Yes\n"); // He can complete all assignments on time
        } else {
            printf("No\n"); // He cannot complete all assignments on time
        }
    }

    return 0;
}
