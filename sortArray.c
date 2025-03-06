#include <stdio.h>


void sort(int array[], int size){
    for(int i =0; i < size -1; i++){
        for(int j = 0;j < size-1; j++ ){
            if(array[j] > array[j+1]){
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
}

int main(){

    int arr[] = {9, 8, 5, 1 ,2, 6, 4, 7, 3};

    
    int size = sizeof(arr)/ sizeof(arr[0]);

    sort(arr,size);
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }


    return 0;
}
