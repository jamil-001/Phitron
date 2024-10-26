#include<stdio.h>
#include<string.h>
int main(){
    char a[1001];
    char b[1001];
    char c[1001];
    scanf("%s %s %s",a,b,c);
    char *min= a;
    char *max = a;
    if(strcmp(b,min) < 0){
        min = b;
    }
    if(strcmp(b,max)>0){
        max = b;
    }
    if(strcmp(c,min) < 0){
        min = c;
    }
    if(strcmp(c,max) > 0){
        max = c;
    }
    printf("%s\n%s",min,max);

    return 0;
}