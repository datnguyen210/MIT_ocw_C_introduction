// Write a C program to calculate the first 100 triangular numbers
// For what a triangular number is, visit: https://en.wikipedia.org/wiki/Triangular_number

#include <stdio.h>

int main(void) {
    for(int i = 1; i <= 100; i++) {
        int triangularNumber = i * (i+1) / 2;
        printf("Triangular number %d: %d\n", i, triangularNumber);
    }
    return 0;
}