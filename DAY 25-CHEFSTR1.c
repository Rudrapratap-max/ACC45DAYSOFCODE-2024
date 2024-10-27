#include <stdio.h>
#include <stdlib.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int N; // number of plucks
        scanf("%d", &N);
        
        int *strings = (int *)malloc(N * sizeof(int)); // array to hold string numbers
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &strings[i]); // read string numbers
        }
        
        long long total_skips = 0; // to accumulate total skips
        
        for (int i = 1; i < N; i++) {
            int current = strings[i - 1];
            int next = strings[i];
            // calculate skips between the current and the next string
            total_skips += abs(next - current) - 1;
        }
        
        printf("%lld\n", total_skips); // print the total skips for the test case
        
        free(strings); // free allocated memory
    }
    
    return 0;
}
