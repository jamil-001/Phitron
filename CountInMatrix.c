///Count IN Matrix
#include<stdio.h>
#include<stdlib.h>
int main(){
   int n,m,x;
   scanf("%d %d %d",&n,&m,&x);
   int f[1000]={0};
   int arr[n+5][m+5];

   for(int i=0;i<n;i++){
       for(int j = 0;j<m;j++){
           scanf("%d",&arr[i][j]);
            // f[arr[i][j]] +=1;
       }
   }
  
  while(x--){
      int num;
      scanf("%d",&num);
      int cout = 0;
      for(int i=0;i<n;i++){
          for(int j=0;j<m;j++){
              if(arr[i][j] ==num){
                  cout++;
              }
          }
      }
      printf("%d\n",cout);
  }
    
    return 0;
}
