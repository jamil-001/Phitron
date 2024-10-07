#include<stdio.h>
int main(){
    int mark;
    scanf("%d",&mark);

if(mark >=33 && mark <= 100){
    printf("You Have to passed\n");
                if(mark >= 90){
                    printf("you have got A+\n");
                    printf("Congratulations! you have got schollarship\n");
                    printf("YOU Have to got 10 Thousand Taka\n");
                }
                else if(mark >= 80){
                printf("You have to got A+\n");
                }
                else if(mark >= 70){
                printf("you have to got A\n");
                }
                else if(mark >= 60){
                printf("you have to got A-\n");
                }
                else if(mark >= 50){
                    printf("you have to got B\n");
                }
                else if (mark >= 40){
                    printf("you have to got C");
                }
                else if(mark >= 33 ){
                    printf("you have to got D\n");
                }
}
else if(mark >= 0 && mark <= 32){
       printf("You have to Fail. Try Again. \n");
       printf("you have to got F Grade\n");
}else {
    printf("Invalid your number\n");
}
    return 0;
}