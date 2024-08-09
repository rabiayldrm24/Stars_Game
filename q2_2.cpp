#include <stdio.h>

int main() {
    int i, j;
    int number;
    
    printf("Enter a positive number: ");
    scanf("%d", &number);
    
    for (i = 1; i <= number; i++) {
        for (j = i; j <= number; j++) {
            printf("%d", j);
        }
        for (j = 1; j < i; j++) {
            printf("%d", j);
        }
        puts("");
    }

    return 0;
}

