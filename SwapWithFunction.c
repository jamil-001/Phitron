// Online C compiler to run C program online
#include <stdio.h>
void swap(int x,int y){
    int temp = x;
    x = y;
    y = temp;
    printf("%d %d\n",x,y);
    
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    swap(a,b);
    return 0;
}