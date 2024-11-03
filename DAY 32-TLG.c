#include <stdio.h>

int main() {
    int N; // Number of rounds
    scanf("%d", &N);
    
    int player1Score = 0, player2Score = 0;
    int maxLead = 0;
    int winner = 0;

    for (int i = 0; i < N; i++) {
        int score1, score2;
        scanf("%d %d", &score1, &score2);

        // Update cumulative scores
        player1Score += score1;
        player2Score += score2;

        // Determine the current lead and the leader
        int currentLead = player1Score - player2Score;
        if (currentLead < 0) {
            currentLead = -currentLead; // Make it positive
            if (currentLead > maxLead) {
                maxLead = currentLead;
                winner = 2; // Player 2 is the leader
            }
        } else {
            if (currentLead > maxLead) {
                maxLead = currentLead;
                winner = 1; // Player 1 is the leader
            }
        }
    }

    // Output the winner and the maximum lead
    printf("%d %d\n", winner, maxLead);
    return 0;
}
