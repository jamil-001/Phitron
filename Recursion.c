#include<stdio.h>
void distribute(int roll,int x){
    printf("Roll:%d and %d choclate\n",roll,x);
    if(roll == 4 && x == 0){
        return 0;
    }
    distribute(roll + 1, x -1);
}
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    distribute(a,b);

    return 0;
}