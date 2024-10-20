#include<stdio.h>
int main(){
        int a,b;
        char s;
        scanf("%d %c %d",&a,&s,&b);
        if(s == '>')
        {
            //grater
            if(a > b)
            {
                printf("Right");
            }else{
                printf("Wrong");
            }
        }else if(s == '<')
        {
            // lessthan
            if(a < b)
            {
                printf("Right");
            }else{
                printf("Wrong");
            }
        }else{
            if(a == b){
                printf("Right");
            }else{
                printf("Wrong");
            }

        }

    return 0;
}