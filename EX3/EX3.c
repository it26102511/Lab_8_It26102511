#include <stdio.h>

int main() {
    int votes[5];
    int highest, winner;

    printf("Enter votes of 5 candidates:\n");

    for (int i = 0; i < 5; i++) {
        scanf("%d", &votes[i]);
    }

    highest = votes[0];
    winner = 1;

    for (int i = 1; i < 5; i++) {
        if (votes[i] > highest) {
            highest = votes[i];
            winner = i + 1;
        }
    }

    printf("Candidate %d wins with %d votes.\n",
           winner, highest);

    return 0;
}
