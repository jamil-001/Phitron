#include<stdio.h>
int main(){
/// find min number
// frequence min number
/// frequency odd or even
 int n;
 scanf("%d",&n);
 int a[n + 5];
 for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
 }
 int min = a[0],cnt=0;
 for(int i=0;i<n;i++){
    if(a[i] < min){
        min = a[i];
    }
 }
 for(int i=0;i<n;i++){
    if(min ==a[i]){
      cnt++;
    }
 }
//  printf("%d ",min);
//  printf("%d ",cnt);
   if(cnt % 2 == 0){
    printf("Unlucky");
   }else{
    printf("Lucky");
   }
   


    return 0;
}