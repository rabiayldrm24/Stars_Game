#include <stdio.h>

int main() {
    int layer_number;

    // Getting layer number from user
    printf("Enter the layer number: ");
    scanf("%d", &layer_number);

    // Printing layer name and description based on layer number
    switch (layer_number) {
        case 1:
            printf("Layer Name: Physical Layer\n");
            printf("Layer Description: Provides network services directly to the end-users.\n");
            break;
        case 2:
            printf("Layer Name: Data Link Layer\n");
            printf("Layer Description: Translates data from the Application layer into an understandable format.\n");
            break;
        case 3:
            printf("Layer Name: Network Layer\n");
            printf("Layer Description: Establishes, manages, and terminates communication sessions.\n");
            break;
        case 4:
            printf("Layer Name: Transport Layer\n");
            printf("Layer Description: Provides transparent transfer of data between end systems.\n");
            break;
        case 5:
            printf("Layer Name: Session Layer\n");
            printf("Layer Description: Routes data packets from one network to another.\n");
            break;
        case 6:
            printf("Layer Name: Presentation Layer\n");
            printf("Layer Description: Provides reliable data transfer across physical links.\n");
            break;
        case 7:
            printf("Layer Name: Application Layer\n");
            printf("Layer Description: Transmits raw data bits over a physical medium.\n");
            break;
        default:
            printf("Invalid layer number!\n");
    }

    return 0;
}

