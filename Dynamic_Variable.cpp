#include<bits/stdc++.h>
using namespace std;
int* p;
int fun(){
    int* x = new int ;//Dynamic variable / access heap memory
    *x = 10;
    p = x;
    cout << "Fun ->" << *p << endl;
    return;
}
int main(){
   int y =  fun();
   int *a = new int;
   delete a;
    cout << "main ->" << *p << endl;
    return 0;
}