#include <stdio.h>

int main(){
    int num; //declaration
    num = 123; // initialization
    int number = 642; // both

    char grade = 'C';
    char name[] = "Bro"; //array of c

    //format specifier 
    /*
    "%"
    */
    
    printf("This is my number %d \n",num);
    printf("This is your average grade: %c\n",grade);
    printf("%s",name);
    
    return 0;
}