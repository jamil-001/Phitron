#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d",&n);
        if(n < 1){
            printf("Entry-level candidate\n");
        }else if(n>=1 && n <= 3){
            printf("Junior candidate\n");
        }else if(n >= 4 && n <=7){
            printf("Mid-level candidate\n");
        }else if( n > 7){
            printf("Senior candidate\n");
        }
    }
    

    return 0;
}