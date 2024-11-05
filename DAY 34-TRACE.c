#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);  // Read number of test cases
    
    while (T--) {
        int N;
        scanf("%d", &N);  // Read size of the matrix
        
        int matrix[100][100];
        
        // Read the matrix elements
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                scanf("%d", &matrix[i][j]);
            }
        }
        
        int max_trace = -1;  // Initialize max_trace to a very small number
        
        // Iterate over all possible sizes of square submatrices (l x l)
        for (int l = 1; l <= N; l++) {  // l is the size of the submatrix
            for (int r = 0; r <= N - l; r++) {  // r is the row index of the top-left corner
                for (int c = 0; c <= N - l; c++) {  // c is the column index of the top-left corner
                    int trace_sum = 0;
                    
                    // Calculate the trace of the submatrix starting at (r, c) of size l x l
                    for (int i = 0; i < l; i++) {
                        trace_sum += matrix[r + i][c + i];
                    }
                    
                    // Update max_trace if we find a larger trace
                    if (trace_sum > max_trace) {
                        max_trace = trace_sum;
                    }
                }
            }
        }
        
        // Print the result for the current test case
        printf("%d\n", max_trace);
    }
    
    return 0;
}
