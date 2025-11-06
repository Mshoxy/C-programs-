/*
name maxwell gachoka
reg no CT101/G/25371/24
subject number of rooms occupoed
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int occupancy[5][10];
    int floor, room;
    int occupied, vacant;

    srand(time(0)); // random seed

    // Assign random occupancy
    for(floor = 0; floor < 5; floor++) {
        for(room = 0; room < 10; room++) {
            occupancy[floor][room] = rand() % 2; // 0 or 1
        }
    }

    // Display result
    for(floor = 0; floor < 5; floor++) {
        occupied = 0;
        vacant = 0;
        
        for(room = 0; room < 10; room++) {
            if(occupancy[floor][room] == 1)
                occupied++;
            else
                vacant++;
        }

        printf("Floor %d -> Occupied: %d, Vacant: %d\n", floor+1, occupied, vacant);
    }

    return 0;
}