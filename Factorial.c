#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,sum = 1; ;
    scanf("%lld",&n);
    for(int i= 1;i<=n;i++){
        sum *=i;
    }
    printf("%lld\n",sum); 
    }
    return 0;
}