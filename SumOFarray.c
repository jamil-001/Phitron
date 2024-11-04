#include<stdio.h>
int a[100000];
int getSum(int i,int n){
    if(i == n){
        return 0;
    }
    
   return a[i] + getSum(i + 1, n);

}
int main(){
    int n;
    scanf("%d",&n);

    for(int i = 0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int ret = getSum(0,n);
    printf("%d\n",ret);

    return 0;
}