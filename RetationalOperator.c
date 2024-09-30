#include<stdio.h>
#include<stdbool.h>
int main(){
    /* 
       Relational Operator
       ==================
       a==b; A equal TO B
       a > b; A greater than B
       a < b; A Less Than B
       a >= b;A greater than or Equal B
       a <= b; A Less Than or Equal B
       a != b; A Not Equal B
    */
    int a = 10,b=5;
    int flag = a!= b;
    printf("Flag = %d",flag);

    return 0;
}