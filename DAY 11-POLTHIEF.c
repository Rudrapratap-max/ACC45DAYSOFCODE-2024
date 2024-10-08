#include <stdio.h>

int main() {
    int T; // number of test cases
    scanf("%d", &T);
    
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        
        if (X == Y) {
            printf("0\n");
        } else {
            // Calculate the time to catch the thief
            int time = (X > Y) ? (X - Y) : (Y - X);
            printf("%d\n", time);
        }
    }
    
    return 0;
}
