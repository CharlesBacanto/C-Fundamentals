#include<stdio.h>
#include<string.h>

int main(){
    int age;
    char name[25];


    printf("What is your name? \n");
    // scanf("%s", &name);
    fgets(name, 25, stdin); // white space
    name[strlen(name)-1] = '\0';

    printf("How old are you? \n");
    scanf("%d", &age);

    printf("You are %s and you are %d years old", name, age);
    return 0;
}