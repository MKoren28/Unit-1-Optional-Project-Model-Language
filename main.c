#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
    srand(time(NULL));          // Seed the random number generator
    int num = (rand() % 3) + 1; // Gives 1, 2, or 3
    printf("%d\n\n\n\n", num);
    return 0;
}


