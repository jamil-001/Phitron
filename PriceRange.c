#include<stdio.h>
int main(){

   int n,x,y;
   scanf("%d %d %d",&n,&x,&y);
   int cnt = 0;
   for(int i = 1;i<=n;i++){
       int value ;
       scanf("%d",&value);
       if(value >= x && value <= y){
        cnt++;
       }
   }
   printf("%d",cnt);
    return 0;
}