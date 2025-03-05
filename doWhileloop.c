#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    // int number = 0;
    // int sum = 0;
    // do{
    //     printf("Enter a number above 0: ");
    //     scanf("%d", &number);
    //     if(number > 0){
    //         sum += number;
    //     }
    // }while(number > 0);

    // printf("Sum: %d",sum);


    char name[25];
   
    bool again;
    char response[4];
    int c;
    do{
        printf("\nName: ");
        fgets(name,25,stdin);
        name[strlen(name)-1] = '\0';
        printf("\nContinue?");
        // scanf("%s",response);
       fgets(response,25,stdin);
       response[strlen(response)-1] = '\0';
       
        int buffer;
        while((buffer = getchar() != '\n' && buffer != EOF));
        // while ((c = getchar()) != '\n' && c != EOF);

            if(strcmpi(response ,"yes") == 0){
                again = true;
            }else{
                again = false;
            }
        

       
            
    }while(again == true);
}



