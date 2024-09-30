#include<stdio.h>
#include<stdbool.h>

int main(){
    /*
       && Logical And
       || Logical OR
       !  Logical Not
    */
    bool result = !((2<5) && (4<5) && (5<6));
    printf("Result = %d",result);
    return 0;
}