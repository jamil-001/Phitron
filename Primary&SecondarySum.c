#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n+5][n+5];
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int primary_diagonal = 0,seconddary_diagonal = 0;
    for(int i = 0;i<n;i++){
        for(int j = 0; j<n;j++){
            if(i == j){
                primary_diagonal += m[i][j];
            }
            if(i+j == n-1){
                seconddary_diagonal += m[i][j];
            }
        }
    }
    int result = abs(primary_diagonal - seconddary_diagonal);
    printf("%d",result);

    return 0;
}