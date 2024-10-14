#include<stdio.h>
int main(){

    int n,x;
    scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&x);
    for(int i=1;i<=n;i++){
        if(i == x){
            if(a[i] == 0){
                a[i] = 1;
            }else{
                a[i] = 0;
            }
        }
    }

    for(int i =1;i<=n;i++){
        printf("%d ",a[i]);
    }
   return 0;
}