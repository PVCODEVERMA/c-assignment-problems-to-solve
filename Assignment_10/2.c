#include <stdio.h>

// Function to calculate simple interest
float simpleInterest(float P, float R, float T) {
    return (P * R * T) / 100;
}

int main() {
    // Calculate and print simple interest
    printf("Si = %f \n\n", simpleInterest(1000, 8.5, 2));
    return 0;
}
