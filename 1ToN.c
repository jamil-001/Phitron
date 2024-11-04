#include<stdio.h>
void fun(int x,int n){
    if(x > n){
        return;
    }
    printf("%d ",x);
    // printf("Before function call, current x: %d\n",x);
    fun(x+1,n);
    // printf("After function call, current x: %d\n",x);
}
int main(){
    // printf("Before function call main\n");
    int a,b;
    scanf("%d %d",&a,&b);
    fun(a,b);
    // printf("After function call main\n");

    return 0;
}