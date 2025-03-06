#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
    srand(time(0)); // seed

    int num1 = rand() % 6 + 1;// random % is for range;  +1 no zero;

    printf("%d", num1);
    return 0;
}