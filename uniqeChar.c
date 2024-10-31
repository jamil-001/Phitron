#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char str[n+5];
    int f[26]={0};
    scanf("%s",str);
    
    printf("%s\n",str);
    int len = strlen(str);
    for(int i =0; i<len;i++){
        char ch = str[i];
        int index = ch - 'a';
        f[index] = 1;
    }
    for(int i=0;i<26;i++){
        if(f[i] == 1){
            printf("%c",i+'a');
        }
        
    }
    return 0;
}