#include<stdio.h>
int main(){
    int arr[3][3];
    for(int i = 0;i<3;i++){
        for(int j = 0; j< 3;j++){
            printf("i = %d, j =  %d,  address = %d ",i,j,&arr[i][j]);
        }
    }

    return 0;
}