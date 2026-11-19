#include <stdio.h>

int main() {
    int rain[4][7];
    int total = 0;
    int weeklyTotal;

    printf("Enter rainfall for 4 weeks (7 days each):\n");

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 7; j++) {
            scanf("%d", &rain[i][j]);
        }
    }

    for (int i = 0; i < 4; i++) {

        weeklyTotal = 0;

        for (int j = 0; j < 7; j++) {
            weeklyTotal += rain[i][j];
        }

        printf("Week %d total: %d mm\n",
               i + 1, weeklyTotal);

        total += weeklyTotal;
    }

    printf("Overall average: %.0f mm\n",
           total / 4.0);

    return 0;
}
