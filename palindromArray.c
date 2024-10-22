#include<stdio.h>
int a[100000];
int main(){
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int ispalindrom = 1;
    for(int i=0; i < n/2;i++){
        if(a[i] != a[n-i-1]){
            ispalindrom = 0;
            break;
        }
    }
    if(ispalindrom){
        printf("YES");
    }else{
        printf("NO");
    }
    
    return 0;
}