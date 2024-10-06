// Beatriz Torres Archundia
// CPSC 351 - 08
// 10.05.24
// btorre0@csu.fullerton.edu
// Github Username: Btorre0

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "patterns.h"

// create process
// Write a program that takes three arguments: the number of “things” (between 1
// and 256) and a “pattern number” (1, 2, 3).
// Create as many subprocesses (“things”) as the number.
// Implement the forking pattern as below. Arrows represent which process
// creates the next process.
// wait for the process

int main(int argc, char* argv[]) {
    if (argc != 3) {
        printf("Usage: %s <PATTERN_TYPE> <THINGS>\n", argv[0]);
        return 1;
    }

    int pattern_type = atoi(argv[1]);
    int num_things = atoi(argv[2]);

    if (num_things < 1 || num_things > 256) {
        printf("<THINGS> must be between 1 and 256\n");
        return 1;
    }

    srand(time(NULL));

    if (pattern_type == 1) {
        pattern_one(num_things);

    } else if (pattern_type == 2) {
        pattern_two(num_things);
    } else {
        printf("Invalid\n");
        return 1;
    }
    return 0;
}