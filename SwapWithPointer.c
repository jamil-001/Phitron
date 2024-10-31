#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    int *x=&a,*y = &b;
    printf("Before Swaping: %d %d\n",*x,*y);
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After Swaping: %d %d",*x,*y);

    return 0;
}