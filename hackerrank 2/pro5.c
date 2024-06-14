#include <stdio.h>

// Function to convert position to (row, column)
void positionToRowCol(int position, int *row, int *col) {
    if (position < 1 || position > 9) {
        printf("Invalid position! Position must be between 1 and 9.\n");
        return;
    }
    *row = (position - 1) / 3;
    *col = (position - 1) % 3;
}

int main() {
    int position;
    int row, col;

    // Prompt user for input
    scanf("%d", &position);

    // Convert position to (row, column)
    positionToRowCol(position, &row, &col);

    // Output the result
    printf("%d %d\n", row, col);

    return 0;
}
