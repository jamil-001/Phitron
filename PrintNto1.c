// Online C compiler to run C program online
#include <stdio.h>
void loop(int x){
    if(x < 1){
        return;
    }
    printf("%d",x);
    if(x > 1){
        printf(" ");
    }
    loop(x - 1);
   
}
int main() {
    int n;
    scanf("%d",&n);
    loop(n);

    return 0;
}