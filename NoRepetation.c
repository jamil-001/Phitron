///No Repeatation
#include<stdio.h>
#include<stdlib.h>
int main(){
   int n;
   scanf("%d",&n);
   int arr[n];
   int f[100001]={0};
   for(int i=0; i < n ;i++){
        scanf("%d",&arr[i]);
       f[arr[i]]++;
   }
   int count =0;
    for(int i=0;i<=100001;i++){
        if(f[i] == 1){
            count++;
        }
   }
   printf("%d\n",count);
   
    return 0;
}
