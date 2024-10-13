#include <stdio.h>

int main() {
    int T; // Number of test cases
    scanf("%d", &T);

    while (T--) {
        int N; // Weight of the pulp in kgs
        scanf("%d", &N);

        // Calculate the total number of pages that can be made
        int total_pages = N * 1000;

        // Calculate the number of notebooks (100 pages each)
        int notebooks = total_pages / 100;

        // Output the result
        printf("%d\n", notebooks);
    }

    return 0;
}
