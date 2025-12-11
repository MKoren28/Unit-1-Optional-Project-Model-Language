#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int maine () {
 int testers[] = {6, 7, 67};
    int size = 3;
    
    srand(time(NULL));

    int numbers = rand() % size;

    int solution = testers[numbers];

    printf("%d\n", solution);

    return 0;
}
   