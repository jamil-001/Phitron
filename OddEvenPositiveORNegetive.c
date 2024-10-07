#include<stdio.h>
int main(){
    int number;
    scanf("%d",&number);
    if(number % 2 == 0){
        printf("EVEN\n");
        if(number > 0){
            printf("Positive\n");
        }else{
            printf("Negetive\n");
        }
    }else{
        printf("ODD\n");
        if(number < 0){
            printf("Negetive\n");
        }else{
            printf("Positive\n");
        }
    }
    return 0;
}