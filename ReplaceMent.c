#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    for(int i= 1;i<=n;i++){
        if(a[i] < 0){
            a[i] = 2;
        }else if(a[i] > 0){
            a[i] =  1;
        }else{
            a[i] = a[i];
        }
    }
    for(int i = 1;i<=n;i++){
        printf("%d ",a[i]);
    }
    return 0;
}