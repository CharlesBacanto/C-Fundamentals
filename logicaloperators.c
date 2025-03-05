#include <stdio.h>

int main(){

    /*
    SAME SAME
    && AND
    || OR
    ! NOT
    */
    int n;
    //FizzBuzz sample
    printf("\nEnter a max value: ");
    scanf("%d",&n);

    for(int i = 1; i <= n; i++){
        if(i%3 == 0 && i%5 == 0){
            printf("FIZZBUZZ\n");
        }else if(i%5 ==0){
            printf("BUZZ\n");
        }else if(i%3 ==0){
            printf("FIZZ\n");
        }else{
            printf("%d\n",i);
        }
    }
}