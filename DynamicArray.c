#include<stdio.h>
#include<stdlib.h>
int main(){
    int *arr=(int *)malloc(10 * sizeof(int));

    for(int i=0;i<10;i++){
        arr[i] =i+1;
    }
    for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    int *temp = arr;
     arr = (int *)realloc(arr, 15 *sizeof(int));
     if(arr == NULL){
        arr = temp;

     }

     for(int i = 5; i<15;i++){
        arr[i] = i+1;
     }

     for(int i = 0; i< 15;i++){
        printf("%d ",arr[i]);
     }



    return 0;
}