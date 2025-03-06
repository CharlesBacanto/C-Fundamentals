#include <stdio.h>
#include <string.h>
#include <stdbool.h>



int main(){

    int age;
    char name[25];
    bool again;
    char response[25];
    int buffer;

    do{
        printf("Enter Name: ");
        fgets(name,25,stdin);
        name[strlen(name)-1] = '\0';

        printf("Continue?: ");
        scanf("%s",&response);

        while((buffer = getchar() != '\n' && buffer != EOF));

        if(strcmpi(response, "yes")==0){
            again = true;
        }else{
            again = false;
        }


    }while(again == true);
    
}