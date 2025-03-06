#include <stdio.h>
#include <string.h>


int main(){

    char x = 'X';
    char y = 'Y';

    char temp;

    temp = x;
    x = y;
    y = temp;

    printf("X contains: %c\n",x);
    printf("Y contains: %c\n",y);

    char glass1[15] ="Water";
    char glass2[15] = "Juice";

    char pitcher[15];

    strcpy(pitcher, glass1);
    strcpy(glass1, glass2);
    strcpy(glass2, pitcher);

    printf("Glass 1 contains: %s\n", glass1);
    printf("Glass 2 contains: %s\n", glass2);


}