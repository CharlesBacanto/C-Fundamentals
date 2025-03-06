#include <stdio.h>
#include <string.h>

int main(){
    
    char names[3][25] = {{"Charles"},
                        {"Dominique"}};
    
   
    strcpy(names[0],"Incursio");
    int rows = sizeof(names)/sizeof(names[0]);

    for(int i=0;i<rows;i++){
       printf("%s", names[i]);
        printf("\n");
    }
}
