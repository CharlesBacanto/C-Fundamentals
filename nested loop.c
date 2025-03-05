#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){

    // //Sample 1
    // char name[25];
    // bool again;
    // char response[4];
    // do{

    //     printf("\nName: ");
    //     fgets(name,25,stdin);

    //     printf("\nAgain?: ");
    //     name[strlen(name)-1] = '\n';
    //     scanf("%s", &response);

    //     int buffer;
    //     while((buffer = getchar() != '\n' && buffer != EOF));

    //     if(strcmpi(response, "yes") == 0){
    //         again = true;
    //     }else{
    //         again = false;
    //     }

    // }while(again == true);
    
    //Sample 2

    int column;
    int row;

    printf("Column: ");
    scanf("%d", &column);
    printf("Row: ");
    scanf("%d", &row);
    for(int i = 1; i <= row; i ++){
        for(int j = 1; j <=column; j++){
            printf("%d",j);
        }
        printf("\n");
    }

}