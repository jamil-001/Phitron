#include<stdio.h>
#include<string.h>
int main(){
    char a[30]= "hello ";
    char b[30]= "world ";
    strcat(b,a);
    printf("%s\n%s",a,b);

    return 0;
}