#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    int max =INT_MIN; 
    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if(max < a[i]){
            max = a[i];
        }
    }

    for(int i = 0;i<n;i++){
        a[i]= max - a[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    

    return 0;
}