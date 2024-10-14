#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    int zero = 0,nonzero =0;
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i = 0;i<n;i++){
        if(a[i] == 0){
            zero++;
        }else{
            nonzero++;
        }
    }
    printf("%d %d\n",zero,nonzero);
    return 0;
}