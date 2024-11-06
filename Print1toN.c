// Online C compiler to run C program online
#include <stdio.h>
    void loop(int x,int n){
        if(x > n){
            return;
        }
        printf("%d\n",x);
        loop(x + 1,n);
        
    }
int main() {
    int n;
    scanf("%d",&n);
   loop(1,n);

    return 0;
}