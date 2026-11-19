#include <stdio.h>

int main() {
    int scores[11];
    int highest, player;

    printf("Enter scores of 11 players:\n");

    for (int i = 0; i < 11; i++) {
        scanf("%d", &scores[i]);
    }

    highest = scores[0];
    player = 1;

    for (int i = 1; i < 11; i++) {
        if (scores[i] > highest) {
            highest = scores[i];
            player = i + 1;
        }
    }

    printf("Highest score: %d by player %d\n",
           highest, player);

    return 0;
}
