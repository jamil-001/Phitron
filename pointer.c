#include<stdio.h>
int main(){
    int a = 5;
    int *b = &a;
    printf("%d\n",a);
    *b = 6;
    int val = *b;
    printf("%d ",a);
  
    return 0;
}