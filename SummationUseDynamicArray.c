#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);

    int *arr= (int *)malloc(n * sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    arr = (int *)realloc(arr,n+5 *sizeof(int));
   
    for(int i = n;i< n +5;i++){
        scanf("%d",&arr[i]);
    }
    int sum = 0;
    for(int i = 0;i<n+5;i++){
        sum += arr[i];
    }
    printf("%d",sum);

    return 0;
}

//For Malloc: int *arr= (int *)malloc(n* sizeof(int));
//For realloc
//arr = (int *)realloc(arr,n+2 * sizeof(int));