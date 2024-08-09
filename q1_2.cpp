#include <stdio.h>
#include <stdlib.h>

int main(void) {
    unsigned int x, y;

    // Üst kýsmý oluþtur
    for (x = 0; x <= 10; x++) {
        // Sol üçgeni oluþtur
        for (y = 0; y <= 10; y++) {
            if (y == x || y == (11 - x - 1) || y == 10)
                printf(" ");
            else if (y == (10 - x) || y == (11 - (10 - x) - 1))
                printf(" ");
            else
                printf("*");
        }

        printf("\n");
    }

    system("pause");
    return 0;
}

