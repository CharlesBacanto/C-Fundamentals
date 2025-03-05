#include <stdio.h>
#include <string.h>


void birthdayGreet(char name[], int age);
void birthday();
double square(double x);

int main(){
    char name[] = "Charles";
    int age = 21;

    birthday();
    birthdayGreet(name,age);
    double x = square(2);
    printf("%.0f",x);

    return 0;
}

void birthday(){
    printf("\nHappy birthday to you!");
}

void birthdayGreet(char name[], int age){
    printf("\nHappy birthday to you %s!", name);
    printf("\nYou are %d years old!", age);
}

double square(double x){
    double result = x * x;
    return result;
}