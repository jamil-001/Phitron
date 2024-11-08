#include<stdio.h>
long long long2_Floor(long long n){
    if(n == 1){
        return 0; ///Base case: log2(1)=0;
    }
    return 1 + long2_Floor(n/2);///Recursive case: log2(n) = 1+long2(n/2);
}
int main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld\n",long2_Floor(n));
    

    return 0;
}