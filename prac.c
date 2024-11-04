#include<stdio.h>
int x;
void fun(int x){
    x = 100;
    printf("%p\n",&x);
}
int main(){
     x = 10;
    fun(x);
    printf("%d",x);
    printf("%p\n",&x);
}