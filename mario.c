#include <stdio.h>
#include <cs50.h>

int main(void) {
    int height = get_int("Height: ");
    // rows
    for (int i = 1; i <= height; i++) {
        // spaces in each row
        for (int j = 0; j < (height - i); j++) {
            printf(" ");
        }
        // hashes
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        // 2 spaces delimiter
        printf("  ");
        // hashes
        for (int k = 0; k < i; k++) {
            printf("#");
        }
        // newline
        printf("\n");
    }
}
