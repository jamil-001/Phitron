// Online C compiler to run C program online
#include <stdio.h>
    int loop(int x){
        if(x == 0){
            return 0;
        }
        
        loop(x - 1);
        printf("I love Recursion\n");
    }
int main() {
    int a;
    scanf("%d",&a);
   loop(a);

    return 0;
}