#include<stdio.h>
int a[100000];
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0,j=n-1;i <j;i++,j--){
        int temp = a[i];
        a[i]=a[j];
        a[j] = temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    //0 1 2 3 4  i < j
    //4 3 2 1 0  j
    //1 2 3 4 5
    

    return 0;
}