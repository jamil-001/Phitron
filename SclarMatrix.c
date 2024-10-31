#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n+5][n+5];
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            scanf("%d",&m[i][j]);
        }
    }
    int element= m[0][0];
    int flag = 1;

    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == j){
                if(m[i][j] != element){
                    flag = 0;
                    break;
                }
            }
        }
        if(flag == 0){
            break;
        }
    }
    if(flag == 1){
        printf("Sclar Matrix\n");
    }else{
        printf("Not Sclar Matrix\n");
    }

    return 0;
    //diagonal
    // all element diagonal same

}