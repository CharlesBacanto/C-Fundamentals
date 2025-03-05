#include <stdio.h>
#include <string.h>

int main(){


    char inputType[25];
    int type;
    int result;

    printf("Enter continue or break for the number 12 in a loop of 20: ");
    scanf("%s",inputType);
 
    if(strcmp(inputType,"continue")== 0){
        type = 1;
    }else if(strcmp(inputType,"break")==0){
        type = 2;
    }else{
        printf("Wrong Input");
    }
    switch(type){
        case 1:
            for(size_t i = 1; i <=20; i++){
                if(i == 12){
                    continue;
                }
                printf("\n%d",i);
            }
          
            break;
        case 2:
            for(size_t i = 1; i <=20; i++){
                if(i == 12){
                    break;
                }
                printf("\n%d",i);
            }
            break;
    }
 
}