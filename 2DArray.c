#include <stdio.h>

int main(){
     int numbers[2][3] = {{1,2,3},
                          {4,5,6}};

    int value[2][3];

    value[0][0]=1;
    value[0][1]=2;
    value[0][2]=3;
    value[1][0]=4;
    value[1][1]=5;
    value[1][2]=6;
    int rows = sizeof(value)/sizeof(value[0]);
    int columns = sizeof(value[0])/sizeof(value[0][0]);

    for(int i = 0; i <rows; i++){
        for(int j = 0; j <columns; j++){
            printf("%d",value[i][j]);
        }
        printf("\n");
    }

     return 0;
}