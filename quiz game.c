#include <stdio.h>
#include <string.h>

int main(){
    char questions[][100]={{"\nWho is the main Protagonist of Kingdom Hearts? "},
                           {"\nWhat is the main Weapon in Kingdom Hearts? "},
                           {"\nWhat is the rank for skilled Key Blade Holder? "},
                          };
    char answers[][25]={{"Sora"},
                        {"KeyBlade"},
                        {"KeyBlade Master"},
                    };
    
    char correctAnswer[25];
    char inputAnswer[25];
    int result;
    int points;

        for(int i = 0; i < sizeof(questions)/ sizeof(questions[0]); i++){
            do{
                printf("Points: %d",points);
                printf("%s",questions[i]);
                fgets(inputAnswer,25,stdin);
                inputAnswer[strlen(inputAnswer)-1]='\0';

                strcpy(correctAnswer,answers[i]);
                result = strcmpi(correctAnswer,inputAnswer);

            }while(result != 0);
            points++;
        }
  
    return 0;
}