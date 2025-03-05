#include <stdio.h>
#include <string.h>

int main(){
    //while loop
    char name[25];
    while(strlen(name)== 0){

       
        printf("What is your name: ");
        fgets(name,25,stdin);
        name[strlen(name)-1]  = '\0';
        
      
    }
    printf("\nHello %s",name);
    return 0;
}