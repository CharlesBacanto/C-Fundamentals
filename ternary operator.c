#include <stdio.h>

int findMax(int x, int y){
    return(x > y)? x : y;
}

int main(){
    //tenary operator
    /* (condition)? true : false;
    */
    int num1, num2;

    printf("Value 1: ");
    scanf("%d",&num1);
    printf("Value 2: ");
    scanf("%d",&num2);


    int max = findMax(num1,num2);
    printf("Highest Value: %d",max);
    
}