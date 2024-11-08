#include<stdio.h>
int min(int *a,int n){
    int min= a[0];
    for(int i=0;i<n;i++){
        if(a[i] < min ){
            min = a[i];
        }
    }
    return min;
}
int max(int *a,int n){
    int max = 0;
    for(int i=0;i<n;i++)
    {
        if(a[i] > max ){
            max = a[i];
        }
    }
    return max;
}
int main(){
    int n;
    scanf("%d",&n);

    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
   printf("%d %d\n",min(a,n),max(a,n));

    return 0;
}