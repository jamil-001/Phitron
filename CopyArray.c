#include<stdio.h>
int a[100000],b[100000];
int main(){
    int lenght1 =0, length2 = 0;
    scanf("%d",&lenght1);
    for(int i=0;i<lenght1;i++){
        scanf("%d",&a[i]);
    }
    // for(int i = 0;i<lenght1;i++){
    //     b[i] = a[i];
    // }
    printf("Before copy array\n");
    for(int i=0;i<lenght1;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<lenght1;i++){
        printf("%d ",b[i]);
    }
    
    for(int i = 0;i<lenght1;i++){
        b[i] = a[i];
    }
    a[2] = 100;
    length2 = lenght1;
    printf("\nAfter copy array\n");
    for(int i=0;i<length2;i++){
        printf("%d ",a[i]);
    }
    printf("\n");
    for(int i=0;i<length2;i++){
        printf("%d ",b[i]);
    }

    return 0;
}