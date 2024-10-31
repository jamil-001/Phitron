#include<stdio.h>
int main(){
    int row,col;
    scanf("%d %d",&row,&col);
    int m[row+5][col+5];
    int element = row *col;
    int cnt =0;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            if(m[i][j] == 0){
                cnt++;
            }
        }
    }
    printf("%d %d\n",element, cnt);
    if(element == cnt){
        printf("Zeor Matrix\n");
    }else{
        printf("Not Zeor Matrix\n");
    }


    return 0;
}