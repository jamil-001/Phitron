#include<stdio.h>
int f[100000]={0};
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+5];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        f[arr[i]] = 1;
    }
    int cnt =0;
    for(int i=0;i<n;i++){
        cnt +=f[i];
        if(f[i] == 1){
            printf("%d ",f[i]);
        }
        
    }
    printf("%d ",cnt);
    return 0;
}