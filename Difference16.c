///Difference 16
#include<stdio.h>
#include<stdlib.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *x= &a,*y = &b;
    int res=abs(*x-*y);
    printf("%d ",res);
    
    return 0;
}
