#include<stdio.h>
#include<ctype.h>
int countVowel(char *s){
    if(*s == '\0'){
        return 0;
    }
    char vowels[]="aeiouAEIOU";

    for(int i = 0; vowels[i] != '\0';i++){
        if(*s == vowels[i]){  //Vowel check
            return 1 + countVowel(s + 1);//is vowel then count +1
        }
    }
    return countVowel(s+1);// isnot move next character
}
int main(){
    char s[201];
    fgets(s,sizeof(s),stdin);//string input
    printf("%d\n",countVowel(s));

    return 0;
}