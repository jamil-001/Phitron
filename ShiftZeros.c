#include<stdio.h>

int fun(int *a,int n){
    int nonzero=0;//count NonZero
    
    for(int i =0;i<n;i++){
        if(a[i] != 0){
            a[nonzero] = a[i];//NonZero Value Replace
              nonzero++;
        }
        
    }
    for(int i = nonzero;i<n;i++){
        a[i] = 0;//NonZero Por teke value replace zero
    }
  
    
   
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fun(a,n);
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
  }

    return 0;
}