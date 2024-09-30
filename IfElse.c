#include<stdio.h>
int main(){
    /*
    Emplimentation of :
       if else 
    */
    int price =60;
    if(price <= 50){
        printf("Buy 4 EGG\n");
        printf("Taka %d Taka Back",50 - price);
    }else{

        printf("Buy 2 Egg");
    }
    return 0;
}