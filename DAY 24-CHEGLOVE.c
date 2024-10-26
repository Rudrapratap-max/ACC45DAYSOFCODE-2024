#include <stdio.h>
#include <stdlib.h>

int canWearFront(int* fingers, int* sheaths, int N) {
    for (int i = 0; i < N; i++) {
        if (fingers[i] > sheaths[i]) {
            return 0; // Can't wear from the front
        }
    }
    return 1; // Can wear from the front
}

int canWearBack(int* fingers, int* sheaths, int N) {
    for (int i = 0; i < N; i++) {
        if (fingers[i] > sheaths[N - 1 - i]) {
            return 0; // Can't wear from the back
        }
    }
    return 1; // Can wear from the back
}

int main() {
    int T;
    scanf("%d", &T);
    
    while (T--) {
        int N;
        scanf("%d", &N);
        
        int* fingers = (int*)malloc(N * sizeof(int));
        int* sheaths = (int*)malloc(N * sizeof(int));
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &fingers[i]);
        }
        for (int i = 0; i < N; i++) {
            scanf("%d", &sheaths[i]);
        }

        int front = canWearFront(fingers, sheaths, N);
        int back = canWearBack(fingers, sheaths, N);

        if (front && back) {
            printf("both\n");
        } else if (front) {
            printf("front\n");
        } else if (back) {
            printf("back\n");
        } else {
            printf("none\n");
        }

        free(fingers);
        free(sheaths);
    }
    
    return 0;
}
