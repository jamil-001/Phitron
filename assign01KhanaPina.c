#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(1000<=n){
        printf("Three Kacchi\n");
    }
    else if(500<=n){
        printf("One Large Pizza\n");
    }
    else if(250<=n){
         printf("Three Small Burger\n");
    }
    else if(100<=n){
          printf("Three Fuchka\n");
    }else{
        printf("Nothing\n");
    }
    return 0;
}