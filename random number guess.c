#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

    const int Min = 1;
    const int Max = 6;
    int guess;
    int answer;

    do{
        srand(time(0));

        answer = (rand() % Max) + Min;
        printf("\nGuess: ");
        scanf("%d", &guess);

        printf("\nYour Guess: %d",guess);
        printf("\nCorrect Number: %d",answer);
        if(guess != answer){
            printf("\nTry Again\n");
        }else{
            printf("\nYou Win!\n");
        }

    }while(guess != answer);
}