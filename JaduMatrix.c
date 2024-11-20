#include<stdio.h>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n+5][m+5];
    if( n != m){
        printf("NO\n");
        return 0;
    }
    //First we input values
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int flag = 1;
    //output this values
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(i == j || i+j == n-1){
                ///primary & secondary diagonal
                if(a[i][j] != 1){
                    flag = 0;
                    break;
                }
            }else{
                // non diagonal
                if(a[i][j] != 0){
                    flag = 0;
                    break;
                }
            }
        }
    }
    if(flag == 1){
        printf("YES\n");
    }else{
        printf("NO\n");
    }

    return 0;
}