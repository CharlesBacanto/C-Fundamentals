#include <stdio.h>

int main (){
    int age;

    printf("\nEnter your age: ");
    scanf("%d",&age);

    if(age >= 18){
        printf("You are a valid voter!");
    }else if(age < 18 && age >0){
        printf("You are not qualified yet");
    }else{
        printf("Invalid age");
    }
}