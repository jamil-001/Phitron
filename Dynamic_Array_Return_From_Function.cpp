#include<bits/stdc++.h>
using namespace std;
int* fun(){
    int* x = new int[5];//Declare Dynamic Array
    for(int i = 0;i<5;i++){
        cin >> x[i];
    }
    return x;
}
int main(){
   int* y =  fun();  
   for(int i = 0;i<5;i++){
       cout<<  y[i] << " ";
    }
    return 0;
}