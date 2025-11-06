
/*
name :maxwell gachoka
reg no CT101/G/25371/24
subject ;code on arrays to calculare fare
*/
#include <stdio.h>

float calculateFare(float distance) {
    return distance * 50;
}

int main() {
    float distance;
    printf("Enter distance traveled (in km): ");
    scanf("%f", &distance);

    printf("Total Fare: KSh. %.2f\n", calculateFare(distance));
    return 0;
}