#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main (){
    const char* tester[] = {"elephant", "pizza", "girl", "boy", "power supply"};
    int length = 5;

    srand(time(NULL));

    int rando = rand() % length;
    const char* answer = tester[rando];

 //part 2

 const char* tester2[] = {"runs", "jumps", "sits down", "climbs", "talks"};
    int length2 = 5;

    srand(time(NULL));

    int rando2 = rand() % length2;
    const char* answer2 = tester2[rando2];

 //part 3

 const char* tester3[] = {"little", "silly", "young", "red haired", "tired"};
    int length3 = 5;

    srand(time(NULL));

    int rando3 = rand() % length3;
    const char* answer3 = tester3[rando3];

    //part 4

 const char* tester4[] = {"quickly", "happily", "angrily"};
    int length4 = 3;

    srand(time(NULL));

    int rando4 = rand() % length4;
    const char* answer4 = tester4[rando4];

       //part 5

 const char* tester5[] = {"the", "a", "my", "your", "his", "her"};
    int length5 = 6;

    srand(time(NULL));

    int rando5 = rand() % length5;
    const char* answer5 = tester5[rando5];

        //part 6

 const char* tester6[] = {"over", "near", "toward", "in front of"};
    int length6 = 4;

    srand(time(NULL));

    int rando6 = rand() % length6;
    const char* answer6 = tester6[rando6];

          //part 7

 const char* tester7[] = {"the", "a", "my", "your", "his", "her"};
    int length7 = 6;

    srand(time(NULL)+1);

    int rando7 = rand() % length7;
    const char* answer7 = tester7[rando7];

//part 8

        const char* tester8[] = {"elephant", "pizza", "girl", "boy", "power supply"};
    int length8 = 5;

    srand(time(NULL)+1);

    int rando8 = rand() % length8;
    const char* answer8 = tester8[rando8];


    printf("%s ", answer5);
    printf("%s ", answer3);
    printf("%s ", answer);
    printf("%s ", answer2);
    printf("%s ", answer4);
    printf("%s ", answer6);
    printf("%s ", answer7);
    printf("%s\n\n\n\n\n\n\n", answer8);
    

    return 0;



}