#include <stdio.h>

int main(){
    //array
    double price[]={5.0,10.0,14.0,25.0,20.0};

    // printf("%.2lf",price[2]);
    // int grade[10];
    int size = sizeof(price) / sizeof(price[0]);

    for(int i = 0; i < size ; i++){
        printf("%.2lf\n",price[i]);
    }

    int arr[11];
    for(int j =0; j <= 10; j++){
        printf("%d\n",j);
    }

    return 0;

}