#include<stdio.h>
int palin(int *a,int i,int j){
    if(i > j){
        return 0;
    }

    return a[i] != a[j] || palin(a,i+1,j-1);
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

   if(palin(a,0,n-1)){
    printf("NO\n");
   }else{
    printf("YES\n");
   } 

    return 0;
}