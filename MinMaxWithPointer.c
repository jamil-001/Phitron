#include<stdio.h>
int main(){
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
int *x = &a,*y = &b, *z = &c;
if(*x <= *y){
    if( *x <= *z){
        printf("%d",*x);
    }else{
        printf("%d",*z);
    }
}else{
     if(*y <= *z){
        printf("%d",*y);
     }else{
        printf("%d",*z);
     }
}
    printf(" ");
    if(*x >= *y && *x >= *z){
        printf("%d",*x);
    }else if(*y >=*z && *y >= *x){
        printf("%d",*y);
    }else{
        printf("%d",*z);
    }

    return 0;
}