/*
name maxwell gachoka
reg no CT101/G/25371/24
calculate fare
*/

#include <stdio.h>

int calculateFare(int distance) {
    return distance * 50; // KSh. 50 per kilometer
}

int main() {
    int distance;
    printf("Enter distance traveled (km): ");
    scanf("%d", &distance);

    printf("Total Fare = KSh. %d\n", calculateFare(distance));
    return 0;
}