#include<stdio.h>
int a[100000];
int main(){
    int n,t;
    scanf("%d %d",&n,&t);
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int cnt=0;
    int sum =0;
    for(int i=0;i<n;i++){
        if(sum + a[i] > t){
            break;
        }
        sum+=a[i];
        cnt++;
    }
    printf("%d",cnt);

    return 0;
}