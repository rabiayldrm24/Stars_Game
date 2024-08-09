#include <stdio.h>

int main() {
    int row, space, star, n;

    printf("Enter the number of rows: ");
    scanf("%d", &n);

    // Creating the pyramid
    for (row = n; row >= 1; row--) {
        // Spaces (decreasing with row number)
        for (space = 0; space < n - row; space++) {
            printf(" ");
        }

        // Stars (increasing with row number)
        for (star = 1; star <= 2 * row - 1; star++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}

