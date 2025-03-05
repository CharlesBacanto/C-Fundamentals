#include <stdio.h>

int main(){
    char grade;

    printf("\nEnter a Grade: ");
    scanf("%c", &grade);

    switch(grade){
        case 'A':
            printf("Highest Honor");
            break;
        case 'B':
            printf("With Honor");
            break;
        case 'C':
            printf("Passed");
            break;
        case 'F':
            printf("Failed");
            break; 
        default:
        printf("Enter a valid grade");
        break;       
    }
}