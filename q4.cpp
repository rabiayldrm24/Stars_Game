#include <stdio.h>

int main() {
    int numbers[10];
    int i, highest, second_highest;

    // Getting input from the user
    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &numbers[i]);
    }

    // Finding the highest and second highest numbers
    highest = numbers[0];
    second_highest = numbers[0];
    for (i = 1; i < 10; i++) {
        if (numbers[i] > highest) {
            second_highest = highest;
            highest = numbers[i];
        } else if (numbers[i] > second_highest && numbers[i] != highest) {
            second_highest = numbers[i];
        }
    }

    // Printing the second highest number
    printf("The second highest number is: %d\n", second_highest);

    return 0;
}

