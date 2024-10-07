///Grading system
#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);
    if(mark >= 80 && mark <=100){
        printf("You have got a+\n");
    }
    else if(mark >= 70 && mark <=80){
        printf("you have got a\n");
    }
    else if(mark >= 60 && mark <= 70){
        printf("you have got a-\n");
    }
    else if(mark >= 50 && mark <= 60){
        printf("you have got B\n");
    }
    else if(mark >= 40 && mark <= 50){
        printf("you have got c\n");
    }
    else if(mark >= 33 && mark <= 40){
        printf("you have got D\n");
    }
    else if(mark >= 0 && mark <= 32){
        printf("you have got F\n");
    }else{
        printf("Invalid code\n");
    }

    return 0;
}