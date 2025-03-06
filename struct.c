#include <stdio.h>
#include <string.h>

struct Player{
    char name[12];
    int score;
};

int main(){
    //Struct

    struct Player player1;
    struct Player player2;

    strcpy(player1.name, "Charles");
    player1.score = 10;

    strcpy(player2.name, "Dom");
    player2.score = 5;

    printf("%s\n", player1.name);
    printf("%d\n", player1.score);

}

