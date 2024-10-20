#include<stdio.h>
int main(){
    int a,b;
    int found = 0;
    scanf("%d %d",&a,&b);
    for(int i = a;i<=b;i++){
        int num = i;
        int lucky = 1;
        while (num > 0){
            int digit = num % 10;
            if(digit != 4 && digit !=7){
                lucky = 0;
                break;
            }
            num /=10;
        }
        if(lucky){
            printf("%d ",i);
            found = 1;
        }
        
        
    }
    if(!found){
        printf("-1");
    }

    return 0;
}
