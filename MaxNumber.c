#include<stdio.h>
int MaxNumber(int *a,int n){
    if(n == 1){
        return a[0];
    }
     int max= MaxNumber(a,n-1);
    //  for(int i = 0;i<n;i++){
    //     if(a[i] > max){
    //         max = a[i];
    //     }
    //  }
  if( (a[n-1] > max)){
        return a[n-1];
        
   }
   return max;
   
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i < n;i++){
        scanf("%d",&a[i]);
    }

    printf("%d ",MaxNumber(a,n));
    return 0;
}