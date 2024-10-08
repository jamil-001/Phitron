#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    
       int digit = n % 10;
         n /=10;
         if(digit % n == 0 || n % digit == 0){
            printf("YES\n");
         }else{
            printf("NO\n");
         }
    
    return 0;
}