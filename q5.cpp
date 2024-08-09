#include <stdio.h>

int main() {
    double p, s, latency;

    // Getting input from the user
    printf("Enter the value of p (proportion of execution time): ");
    scanf("%lf", &p);
    printf("Enter the value of s (speedup of the part benefiting from improved resources): ");
    scanf("%lf", &s);

    // Calculating the latency using Amdahl's law formula
    latency = 1 / ((1 - p) + (p / s));

    // Printing the resulting latency
    printf("The resulting latency according to Amdahl's law is: %.2f\n", latency);

    return 0;
}

